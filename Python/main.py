import json
from antlr4 import *
from CQLLexer import CQLLexer
from CQLParser import CQLParser
from CQLListenerEx import CQLListenerEx

def GetQueryPairNotEquals(query_tree):
    lst_item = []
    path = ['PositionLongContext', 'PositionLongPartContext']
    GetTagList(query_tree, path, lst_item)
    if len(lst_item) == 0:
        return [{'type':'word', 'content':'?', 'op': '=', 'min':1, 'max':1}]
    else:
        lst_ret = []
        for item in lst_item:
            op_name = ''
            if item['type'] == 'AttValuePairNotEqualsContext':
                op_name = '!='
            if item['type'] == 'AttValuePairEqualsContext':
                op_name = '='
            lst_ret.append({'type':item['PropNameContext'],
                    'content':item['ValuePartStringContext'], 'op':op_name, 'min':1, 'max':1})
        return lst_ret

def GetQueryRepetitionExactly(query_tree):
    repeat_times = query_tree['RepetitionExactlyContext']
    repeat_times = int(repeat_times[1:-1])
    return repeat_times

def GetQueryRepetitionMinMaxContext(query_tree):
    repeat_times = query_tree['RepetitionMinMaxContext']
    repeat_times = repeat_times[1:-1].split(',')
    return int(repeat_times[0]), int(repeat_times[1])

def GetQueryList(query_tree):
    lst_query = []
    path = ['QueryContext', 'ComplexQueryContext', 'ComplexQueryContext', 'SimpleQueryContext', 'SequenceContext', 'SequencePartContext']
    GetTagList(query_tree, path, lst_query)
    lst_ret = []
    for query in lst_query:
        if query['type'] == 'PositionPositionLongContext':
            if 'children' in  query:
                lst_ret.append(GetQueryPairNotEquals(query['children']))
            if 'RepetitionMinMaxContext' in query:
                min, max = GetQueryRepetitionMinMaxContext(query)
                for item in lst_ret[-1]:
                    item['min'] = min
                    item['max'] = max
            if 'RepetitionExactlyContext' in query:
                repeat_times = GetQueryRepetitionExactly(query)
                for item in lst_ret[-1]:
                    item['min'] = repeat_times
                    item['max'] = repeat_times
            
    return lst_ret

def GetPartList(query_tree):
    lst_tag = []
    path = ['QueryContext', 'ComplexQueryContext', 'SimpleQueryContext', 'SequenceContext', 'SequencePartContext']
    GetTagList(query_tree, path, lst_tag)
    return lst_tag

def GetTagList(query_tree, path, lst_tag, lev = 0):
    if (lev < len(path)):
        for query in query_tree:
            if (query['type'] == path[lev]) and 'children' in query:
                GetTagList(query['children'], path, lst_tag, lev+1)
    else:
        for query in query_tree:
            lst_tag.append(query)

def GetTag(query_tree, path, tag, lev = 0):
    if (lev < len(path)):
        for query in query_tree:
            if tag in query:
                return query[tag]
            if (query['type'] == path[lev]) and 'children' in query:
                return GetTag(query['children'], path, tag, lev+1)
    return ''

def GetSenTagContaining(query_tree):
    path = ['QueryContext', 'ComplexQueryContext', 'SimpleQueryContext', 'SequenceContext', 'SequencePartContext']
    return GetTag(query_tree, path, 'TagContext')


def GetSenTagWithin(query_tree):
    path = ['QueryContext', 'ComplexQueryContext', 'ComplexQueryContext', 'SimpleQueryContext', 'SequenceContext', 'SequencePartContext']
    return GetTag(query_tree, path, 'TagContext')

def GetTagWithin(query_tree):
    path = ['QueryContext', 'ComplexQueryContext', 'SimpleQueryContext']
    return GetTag(query_tree, path, 'WithinContext')

def GetTagContaining(query_tree):
    path = ['QueryContext', 'ComplexQueryContext', 'SimpleQueryContext']
    return GetTag(query_tree, path, 'ContainingContext')

def GetRestrict(query_tree):
    restrict_type = ''
    restract_content = ''

    restrict_type = GetSenTagWithin(query_tree)
    if (restrict_type == 'WITHIN'):
        restract_content = GetSenTagWithin(query_tree)
    
    restrict_type = GetTagContaining(query_tree)
    if (restrict_type == 'CONTAINING'):
        restract_content = GetSenTagContaining(query_tree)

    return {'type':restrict_type, 'content':restract_content}

def main():
    lst_cql = [
            # "'大华' [word = '说' | word = '志' | word = '三']", 
            # "[word = '这样'] [word = '这样1'] WITHIN <s/>",
            "<s/> CONTAINING [word = '还'] []{1,4} [pos != 'VE']",
            ]
    for cql in lst_cql:
        lexer = CQLLexer(InputStream(cql))
        stream = CommonTokenStream(lexer)
        parser = CQLParser(stream)
        tree = parser.query()
        printer = CQLListenerEx(True)
        walker = ParseTreeWalker()
        walker.walk(printer, tree)
        query_tree = printer.getTree()
        print('----------------------------')
        print(cql)

        jql = {}
        jql['query'] = GetQueryList(query_tree)
        jql['restrict'] = GetRestrict(query_tree)
        # print(GetTagWithin(query_tree))
        # print(GetTagContaining(query_tree))
        # print(GetSenTagWithin(query_tree))
        # print(GetSenTagContaining(query_tree))

        print(json.dumps(jql, ensure_ascii=False, indent=2))
        
        jstr = json.dumps(query_tree, ensure_ascii=False)
        # print(jstr)
        print()
        print()
        

if __name__ == '__main__':
    main()