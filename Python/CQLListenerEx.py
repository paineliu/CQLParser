from CQLParser import CQLParser
from CQLListener import CQLListener

class CQLListenerEx(CQLListener):
    def __init__(self, print_log=False):
        self.print_log = print_log
        self.map_tree = []
        self.history = []
        self.history.append(self.map_tree)

    def getTree(self):
        return self.map_tree
    
    def _enter(self, ctx, addSub = True):
        cur_map = self.history[-1]
        history_len = len(self.history)

        if addSub:
            cur_map.append({"type":type(ctx).__name__, 'children':[]})
            self.history.append(cur_map[-1]['children'])
        else:
            cur_map.append({"type":type(ctx).__name__})
        if self.print_log:
            print("CQL:{}->{}:{} {}".format(' ' * history_len * 2, history_len, type(ctx).__name__, ctx.getText()))

    def _exit(self, ctx, addSub = True):
        if addSub:
            self.history.pop()
        history_len = len(self.history) 
        cur_map = self.history[-1]

        # if addSub and len(cur_map[-1]['children']) == 0:
        #     del cur_map[-1]['children']

        if self.print_log:
            print("CQL:{}<-{}:{} {}".format(' ' * history_len * 2, history_len, type(ctx).__name__, ctx.getText()))


    def _att_enter(self, ctx):
        cur_map = self.history[-1]
        history_len = len(self.history) + 1
        if len(cur_map) == 0:
            history_len -= 1
            cur_map = self.history[-2]
        cur_map[-1][type(ctx).__name__] = ctx.getText()

        if self.print_log:
            print("CQL:{}=>{} {}".format(' ' * history_len * 2, type(ctx).__name__, ctx.getText()))

    def _att_exit(self, ctx):
        pass

      # Enter a parse tree produced by CQLParser#query.
    def enterQuery(self, ctx:CQLParser.QueryContext):
        self._enter(ctx)
 
    # Exit a parse tree produced by CQLParser#query.
    def exitQuery(self, ctx:CQLParser.QueryContext):
        self._exit(ctx)
 

    # Enter a parse tree produced by CQLParser#complexQuery.
    def enterComplexQuery(self, ctx:CQLParser.ComplexQueryContext):
        self._enter(ctx)

    # Exit a parse tree produced by CQLParser#complexQuery.
    def exitComplexQuery(self, ctx:CQLParser.ComplexQueryContext):
        self._exit(ctx)
 
     # Enter a parse tree produced by CQLParser#within.
    def enterWithin(self, ctx:CQLParser.WithinContext):
        self._att_enter(ctx)

    # Exit a parse tree produced by CQLParser#within.
    def exitWithin(self, ctx:CQLParser.WithinContext):
        self._att_exit(ctx)

    # Enter a parse tree produced by CQLParser#containing.
    def enterContaining(self, ctx:CQLParser.ContainingContext):
        self._att_enter(ctx)

    # Exit a parse tree produced by CQLParser#containing.
    def exitContaining(self, ctx:CQLParser.ContainingContext):
        self._att_exit(ctx)

    # Enter a parse tree produced by CQLParser#simpleQuery.
    def enterSimpleQuery(self, ctx:CQLParser.SimpleQueryContext):
        self._enter(ctx)

    # Exit a parse tree produced by CQLParser#simpleQuery.
    def exitSimpleQuery(self, ctx:CQLParser.SimpleQueryContext):
        self._exit(ctx)

    # Enter a parse tree produced by CQLParser#sequence.
    def enterSequence(self, ctx:CQLParser.SequenceContext):
        self._enter(ctx)

    # Exit a parse tree produced by CQLParser#sequence.
    def exitSequence(self, ctx:CQLParser.SequenceContext):
        self._exit(ctx)

    # Enter a parse tree produced by CQLParser#sequencePart.
    def enterSequencePart(self, ctx:CQLParser.SequencePartContext):
        self._enter(ctx)

    # Exit a parse tree produced by CQLParser#sequencePart.
    def exitSequencePart(self, ctx:CQLParser.SequencePartContext):
        self._exit(ctx)

    # Enter a parse tree produced by CQLParser#tag.
    def enterTag(self, ctx:CQLParser.TagContext):
        self._att_enter(ctx)

    # Exit a parse tree produced by CQLParser#tag.
    def exitTag(self, ctx:CQLParser.TagContext):
        self._att_exit(ctx)

    # Enter a parse tree produced by CQLParser#attribute.
    def enterAttribute(self, ctx:CQLParser.AttributeContext):
        self._enter(ctx)
        pass

    # Exit a parse tree produced by CQLParser#attribute.
    def exitAttribute(self, ctx:CQLParser.AttributeContext):
        self._exit(ctx)
        pass

    # Enter a parse tree produced by CQLParser#positionPositionWord.
    def enterPositionPositionWord(self, ctx:CQLParser.PositionPositionWordContext):
        self._enter(ctx)
        pass

    # Exit a parse tree produced by CQLParser#positionPositionWord.
    def exitPositionPositionWord(self, ctx:CQLParser.PositionPositionWordContext):
        self._exit(ctx)
        pass

    # Enter a parse tree produced by CQLParser#positionPositionLong.
    def enterPositionPositionLong(self, ctx:CQLParser.PositionPositionLongContext):
        self._enter(ctx)

    # Exit a parse tree produced by CQLParser#positionPositionLong.
    def exitPositionPositionLong(self, ctx:CQLParser.PositionPositionLongContext):
        self._exit(ctx)

    # Enter a parse tree produced by CQLParser#positionWord.
    def enterPositionWord(self, ctx:CQLParser.PositionWordContext):
        self._enter(ctx)
        pass

    # Exit a parse tree produced by CQLParser#positionWord.
    def exitPositionWord(self, ctx:CQLParser.PositionWordContext):
        self._exit(ctx)
        pass

    # Enter a parse tree produced by CQLParser#positionLong.
    def enterPositionLong(self, ctx:CQLParser.PositionLongContext):
        self._enter(ctx)

    # Exit a parse tree produced by CQLParser#positionLong.
    def exitPositionLong(self, ctx:CQLParser.PositionLongContext):
        self._exit(ctx)


    # Enter a parse tree produced by CQLParser#positionLongPart.
    def enterPositionLongPart(self, ctx:CQLParser.PositionLongPartContext):
        self._enter(ctx)

    # Exit a parse tree produced by CQLParser#positionLongPart.
    def exitPositionLongPart(self, ctx:CQLParser.PositionLongPartContext):
        self._exit(ctx)

    # Enter a parse tree produced by CQLParser#attValuePairEquals.
    def enterAttValuePairEquals(self, ctx:CQLParser.AttValuePairEqualsContext):
        self._enter(ctx, False)

    # Exit a parse tree produced by CQLParser#attValuePairEquals.
    def exitAttValuePairEquals(self, ctx:CQLParser.AttValuePairEqualsContext):
        self._exit(ctx, False)

    # Enter a parse tree produced by CQLParser#attValuePairNotEquals.
    def enterAttValuePairNotEquals(self, ctx:CQLParser.AttValuePairNotEqualsContext):
        self._enter(ctx, False)
        pass

    # Exit a parse tree produced by CQLParser#attValuePairNotEquals.
    def exitAttValuePairNotEquals(self, ctx:CQLParser.AttValuePairNotEqualsContext):
        self._exit(ctx, False)
        pass

    # Enter a parse tree produced by CQLParser#attValuePairDefaultEquals.
    def enterAttValuePairDefaultEquals(self, ctx:CQLParser.AttValuePairDefaultEqualsContext):
        self._enter(ctx)
        pass

    # Exit a parse tree produced by CQLParser#attValuePairDefaultEquals.
    def exitAttValuePairDefaultEquals(self, ctx:CQLParser.AttValuePairDefaultEqualsContext):
        self._exit(ctx)
        pass


    # Enter a parse tree produced by CQLParser#propName.
    def enterPropName(self, ctx:CQLParser.PropNameContext):
        self._att_enter(ctx)
        pass

    # Exit a parse tree produced by CQLParser#propName.
    def exitPropName(self, ctx:CQLParser.PropNameContext):
        self._att_exit(ctx)
        pass


    # Enter a parse tree produced by CQLParser#repetitionZeroOrMore.
    def enterRepetitionZeroOrMore(self, ctx:CQLParser.RepetitionZeroOrMoreContext):
        self._att_enter(ctx)

    # Exit a parse tree produced by CQLParser#repetitionZeroOrMore.
    def exitRepetitionZeroOrMore(self, ctx:CQLParser.RepetitionZeroOrMoreContext):
        self._att_exit(ctx)

    # Enter a parse tree produced by CQLParser#repetitionOneOrMore.
    def enterRepetitionOneOrMore(self, ctx:CQLParser.RepetitionOneOrMoreContext):
        self._att_enter(ctx)

    # Exit a parse tree produced by CQLParser#repetitionOneOrMore.
    def exitRepetitionOneOrMore(self, ctx:CQLParser.RepetitionOneOrMoreContext):
        self._att_exit(ctx)

    # Enter a parse tree produced by CQLParser#repetitionZeroOrOne.
    def enterRepetitionZeroOrOne(self, ctx:CQLParser.RepetitionZeroOrOneContext):
        self._att_enter(ctx)

    # Exit a parse tree produced by CQLParser#repetitionZeroOrOne.
    def exitRepetitionZeroOrOne(self, ctx:CQLParser.RepetitionZeroOrOneContext):
        self._att_exit(ctx)

    # Enter a parse tree produced by CQLParser#repetitionExactly.
    def enterRepetitionExactly(self, ctx:CQLParser.RepetitionExactlyContext):
        self._att_enter(ctx)

    # Exit a parse tree produced by CQLParser#repetitionExactly.
    def exitRepetitionExactly(self, ctx:CQLParser.RepetitionExactlyContext):
        self._att_exit(ctx)

    # Enter a parse tree produced by CQLParser#repetitionMinMax.
    def enterRepetitionMinMax(self, ctx:CQLParser.RepetitionMinMaxContext):
        self._att_enter(ctx)

    # Exit a parse tree produced by CQLParser#repetitionMinMax.
    def exitRepetitionMinMax(self, ctx:CQLParser.RepetitionMinMaxContext):
        self._att_exit(ctx)

    # Enter a parse tree produced by CQLParser#quotedString.
    def enterQuotedString(self, ctx:CQLParser.QuotedStringContext):
        self._att_enter(ctx)

    # Exit a parse tree produced by CQLParser#quotedString.
    def exitQuotedString(self, ctx:CQLParser.QuotedStringContext):
        self._att_exit(ctx)

    # Enter a parse tree produced by CQLParser#and.
    def enterAnd(self, ctx:CQLParser.AndContext):
        self._att_enter(ctx)

    # Exit a parse tree produced by CQLParser#and.
    def exitAnd(self, ctx:CQLParser.AndContext):
        self._att_exit(ctx)

    # Enter a parse tree produced by CQLParser#or.
    def enterOr(self, ctx:CQLParser.OrContext):
        self._att_enter(ctx)

    # Exit a parse tree produced by CQLParser#or.
    def exitOr(self, ctx:CQLParser.OrContext):
        self._att_exit(ctx)

    # Enter a parse tree produced by CQLParser#implication.
    def enterImplication(self, ctx:CQLParser.ImplicationContext):
        self._enter(ctx)
        pass

    # Exit a parse tree produced by CQLParser#implication.
    def exitImplication(self, ctx:CQLParser.ImplicationContext):
        self._exit(ctx)
        pass

    # Enter a parse tree produced by CQLParser#valuePartString.
    def enterValuePartString(self, ctx:CQLParser.ValuePartStringContext):
        self._att_enter(ctx)

    # Exit a parse tree produced by CQLParser#valuePartString.
    def exitValuePartString(self, ctx:CQLParser.ValuePartStringContext):
        self._att_exit(ctx)

    # Enter a parse tree produced by CQLParser#valuePartParenthesised.
    def enterValuePartParenthesised(self, ctx:CQLParser.ValuePartParenthesisedContext):
        self._enter(ctx)
        pass

    # Exit a parse tree produced by CQLParser#valuePartParenthesised.
    def exitValuePartParenthesised(self, ctx:CQLParser.ValuePartParenthesisedContext):
        self._exit(ctx)
        pass


    # Enter a parse tree produced by CQLParser#valueWith.
    def enterValueWith(self, ctx:CQLParser.ValueWithContext):
        self._enter(ctx)
        pass

    # Exit a parse tree produced by CQLParser#valueWith.
    def exitValueWith(self, ctx:CQLParser.ValueWithContext):
        self._exit(ctx)
        pass

    # Enter a parse tree produced by CQLParser#valueWithout.
    def enterValueWithout(self, ctx:CQLParser.ValueWithoutContext):
        self._enter(ctx)
        pass

    # Exit a parse tree produced by CQLParser#valueWithout.
    def exitValueWithout(self, ctx:CQLParser.ValueWithoutContext):
        self._exit(ctx)
        pass
