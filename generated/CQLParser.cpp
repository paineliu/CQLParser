
// Generated from ./CQL.g4 by ANTLR 4.13.1


#include "CQLVisitor.h"

#include "CQLParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CQLParserStaticData final {
  CQLParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CQLParserStaticData(const CQLParserStaticData&) = delete;
  CQLParserStaticData(CQLParserStaticData&&) = delete;
  CQLParserStaticData& operator=(const CQLParserStaticData&) = delete;
  CQLParserStaticData& operator=(CQLParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cqlParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CQLParserStaticData *cqlParserStaticData = nullptr;

void cqlParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cqlParserStaticData != nullptr) {
    return;
  }
#else
  assert(cqlParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CQLParserStaticData>(
    std::vector<std::string>{
      "query", "complexQuery", "queryOperator", "simpleQuery", "sequence", 
      "sequencePart", "tag", "attribute", "position", "positionWord", "positionLong", 
      "positionLongPart", "attValuePair", "propName", "repetitionAmount", 
      "quotedString", "booleanOperator", "valuePart", "value"
    },
    std::vector<std::string>{
      "", "':'", "'!='", "','", "'->'", "'WITHIN'", "'CONTAINING'", "", 
      "", "", "", "", "'<'", "'>'", "'/'", "'='", "'['", "']'", "'('", "')'", 
      "'!'", "'*'", "'+'", "'\\u003F'", "'{'", "'}'", "'&'", "'|'", "'-'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "WITHIN", "CONTAINING", "NAME", "NUMBER", "DOUBLE_QUOTED_STRING", 
      "SINGLE_QUOTED_STRING", "WS", "LT", "GT", "SOLIDUS", "EQUALS", "LEFT_SQUARE_BRACKET", 
      "RIGHT_SQUARE_BRACKET", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "EXCLAMATION_MARK", 
      "ASTERISK", "PLUS", "QUESTION_MARK", "LEFT_CURLY_BRACKET", "LEFT_RIGHT_BRACKET", 
      "AMPERSAND", "VERTICAL_LINE", "HYPHEN_MINUS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,28,174,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,1,1,1,1,1,1,1,3,
  	1,45,8,1,1,2,1,2,3,2,49,8,2,1,3,1,3,1,3,1,3,3,3,55,8,3,1,4,4,4,58,8,4,
  	11,4,12,4,59,1,5,1,5,3,5,64,8,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,72,8,5,1,
  	5,3,5,75,8,5,1,6,1,6,3,6,79,8,6,1,6,1,6,5,6,83,8,6,10,6,12,6,86,9,6,1,
  	6,3,6,89,8,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,3,8,100,8,8,1,8,3,8,
  	103,8,8,1,9,1,9,1,10,1,10,1,10,1,10,3,10,111,8,10,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,3,11,120,8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,3,12,131,8,12,1,13,1,13,1,13,3,13,136,8,13,1,14,1,14,1,14,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,14,3,14,148,8,14,1,14,3,14,151,8,14,1,15,1,15,
  	1,16,1,16,1,16,3,16,158,8,16,1,17,1,17,1,17,1,17,1,17,3,17,165,8,17,1,
  	18,1,18,1,18,1,18,1,18,3,18,172,8,18,1,18,0,0,19,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,0,2,1,0,7,8,1,0,9,10,182,0,38,1,0,0,0,2,
  	40,1,0,0,0,4,48,1,0,0,0,6,50,1,0,0,0,8,57,1,0,0,0,10,63,1,0,0,0,12,76,
  	1,0,0,0,14,92,1,0,0,0,16,102,1,0,0,0,18,104,1,0,0,0,20,106,1,0,0,0,22,
  	119,1,0,0,0,24,130,1,0,0,0,26,132,1,0,0,0,28,150,1,0,0,0,30,152,1,0,0,
  	0,32,157,1,0,0,0,34,164,1,0,0,0,36,171,1,0,0,0,38,39,3,2,1,0,39,1,1,0,
  	0,0,40,44,3,6,3,0,41,42,3,4,2,0,42,43,3,2,1,0,43,45,1,0,0,0,44,41,1,0,
  	0,0,44,45,1,0,0,0,45,3,1,0,0,0,46,49,5,5,0,0,47,49,5,6,0,0,48,46,1,0,
  	0,0,48,47,1,0,0,0,49,5,1,0,0,0,50,54,3,8,4,0,51,52,3,32,16,0,52,53,3,
  	6,3,0,53,55,1,0,0,0,54,51,1,0,0,0,54,55,1,0,0,0,55,7,1,0,0,0,56,58,3,
  	10,5,0,57,56,1,0,0,0,58,59,1,0,0,0,59,57,1,0,0,0,59,60,1,0,0,0,60,9,1,
  	0,0,0,61,62,7,0,0,0,62,64,5,1,0,0,63,61,1,0,0,0,63,64,1,0,0,0,64,71,1,
  	0,0,0,65,72,3,12,6,0,66,72,3,16,8,0,67,68,5,18,0,0,68,69,3,2,1,0,69,70,
  	5,19,0,0,70,72,1,0,0,0,71,65,1,0,0,0,71,66,1,0,0,0,71,67,1,0,0,0,72,74,
  	1,0,0,0,73,75,3,28,14,0,74,73,1,0,0,0,74,75,1,0,0,0,75,11,1,0,0,0,76,
  	78,5,12,0,0,77,79,5,14,0,0,78,77,1,0,0,0,78,79,1,0,0,0,79,80,1,0,0,0,
  	80,84,5,7,0,0,81,83,3,14,7,0,82,81,1,0,0,0,83,86,1,0,0,0,84,82,1,0,0,
  	0,84,85,1,0,0,0,85,88,1,0,0,0,86,84,1,0,0,0,87,89,5,14,0,0,88,87,1,0,
  	0,0,88,89,1,0,0,0,89,90,1,0,0,0,90,91,5,13,0,0,91,13,1,0,0,0,92,93,5,
  	7,0,0,93,94,5,15,0,0,94,95,3,30,15,0,95,15,1,0,0,0,96,103,3,18,9,0,97,
  	99,5,16,0,0,98,100,3,20,10,0,99,98,1,0,0,0,99,100,1,0,0,0,100,101,1,0,
  	0,0,101,103,5,17,0,0,102,96,1,0,0,0,102,97,1,0,0,0,103,17,1,0,0,0,104,
  	105,3,30,15,0,105,19,1,0,0,0,106,110,3,22,11,0,107,108,3,32,16,0,108,
  	109,3,20,10,0,109,111,1,0,0,0,110,107,1,0,0,0,110,111,1,0,0,0,111,21,
  	1,0,0,0,112,120,3,24,12,0,113,114,5,18,0,0,114,115,3,20,10,0,115,116,
  	5,19,0,0,116,120,1,0,0,0,117,118,5,20,0,0,118,120,3,22,11,0,119,112,1,
  	0,0,0,119,113,1,0,0,0,119,117,1,0,0,0,120,23,1,0,0,0,121,122,3,26,13,
  	0,122,123,5,15,0,0,123,124,3,34,17,0,124,131,1,0,0,0,125,126,3,26,13,
  	0,126,127,5,2,0,0,127,128,3,34,17,0,128,131,1,0,0,0,129,131,3,34,17,0,
  	130,121,1,0,0,0,130,125,1,0,0,0,130,129,1,0,0,0,131,25,1,0,0,0,132,135,
  	5,7,0,0,133,134,5,14,0,0,134,136,5,7,0,0,135,133,1,0,0,0,135,136,1,0,
  	0,0,136,27,1,0,0,0,137,151,5,21,0,0,138,151,5,22,0,0,139,151,5,23,0,0,
  	140,141,5,24,0,0,141,142,5,8,0,0,142,151,5,25,0,0,143,144,5,24,0,0,144,
  	145,5,8,0,0,145,147,5,3,0,0,146,148,5,8,0,0,147,146,1,0,0,0,147,148,1,
  	0,0,0,148,149,1,0,0,0,149,151,5,25,0,0,150,137,1,0,0,0,150,138,1,0,0,
  	0,150,139,1,0,0,0,150,140,1,0,0,0,150,143,1,0,0,0,151,29,1,0,0,0,152,
  	153,7,1,0,0,153,31,1,0,0,0,154,158,5,26,0,0,155,158,5,27,0,0,156,158,
  	5,4,0,0,157,154,1,0,0,0,157,155,1,0,0,0,157,156,1,0,0,0,158,33,1,0,0,
  	0,159,165,3,30,15,0,160,161,5,18,0,0,161,162,3,36,18,0,162,163,5,19,0,
  	0,163,165,1,0,0,0,164,159,1,0,0,0,164,160,1,0,0,0,165,35,1,0,0,0,166,
  	167,3,34,17,0,167,168,3,32,16,0,168,169,3,36,18,0,169,172,1,0,0,0,170,
  	172,3,34,17,0,171,166,1,0,0,0,171,170,1,0,0,0,172,37,1,0,0,0,21,44,48,
  	54,59,63,71,74,78,84,88,99,102,110,119,130,135,147,150,157,164,171
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cqlParserStaticData = staticData.release();
}

}

CQLParser::CQLParser(TokenStream *input) : CQLParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CQLParser::CQLParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CQLParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *cqlParserStaticData->atn, cqlParserStaticData->decisionToDFA, cqlParserStaticData->sharedContextCache, options);
}

CQLParser::~CQLParser() {
  delete _interpreter;
}

const atn::ATN& CQLParser::getATN() const {
  return *cqlParserStaticData->atn;
}

std::string CQLParser::getGrammarFileName() const {
  return "CQL.g4";
}

const std::vector<std::string>& CQLParser::getRuleNames() const {
  return cqlParserStaticData->ruleNames;
}

const dfa::Vocabulary& CQLParser::getVocabulary() const {
  return cqlParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CQLParser::getSerializedATN() const {
  return cqlParserStaticData->serializedATN;
}


//----------------- QueryContext ------------------------------------------------------------------

CQLParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CQLParser::ComplexQueryContext* CQLParser::QueryContext::complexQuery() {
  return getRuleContext<CQLParser::ComplexQueryContext>(0);
}


size_t CQLParser::QueryContext::getRuleIndex() const {
  return CQLParser::RuleQuery;
}


std::any CQLParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}

CQLParser::QueryContext* CQLParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 0, CQLParser::RuleQuery);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    complexQuery();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComplexQueryContext ------------------------------------------------------------------

CQLParser::ComplexQueryContext::ComplexQueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CQLParser::SimpleQueryContext* CQLParser::ComplexQueryContext::simpleQuery() {
  return getRuleContext<CQLParser::SimpleQueryContext>(0);
}

CQLParser::QueryOperatorContext* CQLParser::ComplexQueryContext::queryOperator() {
  return getRuleContext<CQLParser::QueryOperatorContext>(0);
}

CQLParser::ComplexQueryContext* CQLParser::ComplexQueryContext::complexQuery() {
  return getRuleContext<CQLParser::ComplexQueryContext>(0);
}


size_t CQLParser::ComplexQueryContext::getRuleIndex() const {
  return CQLParser::RuleComplexQuery;
}


std::any CQLParser::ComplexQueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitComplexQuery(this);
  else
    return visitor->visitChildren(this);
}

CQLParser::ComplexQueryContext* CQLParser::complexQuery() {
  ComplexQueryContext *_localctx = _tracker.createInstance<ComplexQueryContext>(_ctx, getState());
  enterRule(_localctx, 2, CQLParser::RuleComplexQuery);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    simpleQuery();
    setState(44);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CQLParser::WITHIN

    || _la == CQLParser::CONTAINING) {
      setState(41);
      queryOperator();
      setState(42);
      complexQuery();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QueryOperatorContext ------------------------------------------------------------------

CQLParser::QueryOperatorContext::QueryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CQLParser::QueryOperatorContext::getRuleIndex() const {
  return CQLParser::RuleQueryOperator;
}

void CQLParser::QueryOperatorContext::copyFrom(QueryOperatorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WithinContext ------------------------------------------------------------------

tree::TerminalNode* CQLParser::WithinContext::WITHIN() {
  return getToken(CQLParser::WITHIN, 0);
}

CQLParser::WithinContext::WithinContext(QueryOperatorContext *ctx) { copyFrom(ctx); }


std::any CQLParser::WithinContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitWithin(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ContainingContext ------------------------------------------------------------------

tree::TerminalNode* CQLParser::ContainingContext::CONTAINING() {
  return getToken(CQLParser::CONTAINING, 0);
}

CQLParser::ContainingContext::ContainingContext(QueryOperatorContext *ctx) { copyFrom(ctx); }


std::any CQLParser::ContainingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitContaining(this);
  else
    return visitor->visitChildren(this);
}
CQLParser::QueryOperatorContext* CQLParser::queryOperator() {
  QueryOperatorContext *_localctx = _tracker.createInstance<QueryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 4, CQLParser::RuleQueryOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(48);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CQLParser::WITHIN: {
        _localctx = _tracker.createInstance<CQLParser::WithinContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(46);
        match(CQLParser::WITHIN);
        break;
      }

      case CQLParser::CONTAINING: {
        _localctx = _tracker.createInstance<CQLParser::ContainingContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(47);
        match(CQLParser::CONTAINING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleQueryContext ------------------------------------------------------------------

CQLParser::SimpleQueryContext::SimpleQueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CQLParser::SequenceContext* CQLParser::SimpleQueryContext::sequence() {
  return getRuleContext<CQLParser::SequenceContext>(0);
}

CQLParser::BooleanOperatorContext* CQLParser::SimpleQueryContext::booleanOperator() {
  return getRuleContext<CQLParser::BooleanOperatorContext>(0);
}

CQLParser::SimpleQueryContext* CQLParser::SimpleQueryContext::simpleQuery() {
  return getRuleContext<CQLParser::SimpleQueryContext>(0);
}


size_t CQLParser::SimpleQueryContext::getRuleIndex() const {
  return CQLParser::RuleSimpleQuery;
}


std::any CQLParser::SimpleQueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitSimpleQuery(this);
  else
    return visitor->visitChildren(this);
}

CQLParser::SimpleQueryContext* CQLParser::simpleQuery() {
  SimpleQueryContext *_localctx = _tracker.createInstance<SimpleQueryContext>(_ctx, getState());
  enterRule(_localctx, 6, CQLParser::RuleSimpleQuery);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    sequence();
    setState(54);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 201326608) != 0)) {
      setState(51);
      booleanOperator();
      setState(52);
      simpleQuery();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SequenceContext ------------------------------------------------------------------

CQLParser::SequenceContext::SequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CQLParser::SequencePartContext *> CQLParser::SequenceContext::sequencePart() {
  return getRuleContexts<CQLParser::SequencePartContext>();
}

CQLParser::SequencePartContext* CQLParser::SequenceContext::sequencePart(size_t i) {
  return getRuleContext<CQLParser::SequencePartContext>(i);
}


size_t CQLParser::SequenceContext::getRuleIndex() const {
  return CQLParser::RuleSequence;
}


std::any CQLParser::SequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitSequence(this);
  else
    return visitor->visitChildren(this);
}

CQLParser::SequenceContext* CQLParser::sequence() {
  SequenceContext *_localctx = _tracker.createInstance<SequenceContext>(_ctx, getState());
  enterRule(_localctx, 8, CQLParser::RuleSequence);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(56);
      sequencePart();
      setState(59); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 333696) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SequencePartContext ------------------------------------------------------------------

CQLParser::SequencePartContext::SequencePartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CQLParser::TagContext* CQLParser::SequencePartContext::tag() {
  return getRuleContext<CQLParser::TagContext>(0);
}

CQLParser::PositionContext* CQLParser::SequencePartContext::position() {
  return getRuleContext<CQLParser::PositionContext>(0);
}

tree::TerminalNode* CQLParser::SequencePartContext::LEFT_PARENTHESIS() {
  return getToken(CQLParser::LEFT_PARENTHESIS, 0);
}

CQLParser::ComplexQueryContext* CQLParser::SequencePartContext::complexQuery() {
  return getRuleContext<CQLParser::ComplexQueryContext>(0);
}

tree::TerminalNode* CQLParser::SequencePartContext::RIGHT_PARENTHESIS() {
  return getToken(CQLParser::RIGHT_PARENTHESIS, 0);
}

CQLParser::RepetitionAmountContext* CQLParser::SequencePartContext::repetitionAmount() {
  return getRuleContext<CQLParser::RepetitionAmountContext>(0);
}

tree::TerminalNode* CQLParser::SequencePartContext::NAME() {
  return getToken(CQLParser::NAME, 0);
}

tree::TerminalNode* CQLParser::SequencePartContext::NUMBER() {
  return getToken(CQLParser::NUMBER, 0);
}


size_t CQLParser::SequencePartContext::getRuleIndex() const {
  return CQLParser::RuleSequencePart;
}


std::any CQLParser::SequencePartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitSequencePart(this);
  else
    return visitor->visitChildren(this);
}

CQLParser::SequencePartContext* CQLParser::sequencePart() {
  SequencePartContext *_localctx = _tracker.createInstance<SequencePartContext>(_ctx, getState());
  enterRule(_localctx, 10, CQLParser::RuleSequencePart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CQLParser::NAME

    || _la == CQLParser::NUMBER) {
      setState(61);
      _la = _input->LA(1);
      if (!(_la == CQLParser::NAME

      || _la == CQLParser::NUMBER)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(62);
      match(CQLParser::T__0);
    }
    setState(71);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CQLParser::LT: {
        setState(65);
        tag();
        break;
      }

      case CQLParser::DOUBLE_QUOTED_STRING:
      case CQLParser::SINGLE_QUOTED_STRING:
      case CQLParser::LEFT_SQUARE_BRACKET: {
        setState(66);
        position();
        break;
      }

      case CQLParser::LEFT_PARENTHESIS: {
        setState(67);
        match(CQLParser::LEFT_PARENTHESIS);
        setState(68);
        complexQuery();
        setState(69);
        match(CQLParser::RIGHT_PARENTHESIS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31457280) != 0)) {
      setState(73);
      repetitionAmount();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TagContext ------------------------------------------------------------------

CQLParser::TagContext::TagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CQLParser::TagContext::LT() {
  return getToken(CQLParser::LT, 0);
}

tree::TerminalNode* CQLParser::TagContext::NAME() {
  return getToken(CQLParser::NAME, 0);
}

tree::TerminalNode* CQLParser::TagContext::GT() {
  return getToken(CQLParser::GT, 0);
}

std::vector<tree::TerminalNode *> CQLParser::TagContext::SOLIDUS() {
  return getTokens(CQLParser::SOLIDUS);
}

tree::TerminalNode* CQLParser::TagContext::SOLIDUS(size_t i) {
  return getToken(CQLParser::SOLIDUS, i);
}

std::vector<CQLParser::AttributeContext *> CQLParser::TagContext::attribute() {
  return getRuleContexts<CQLParser::AttributeContext>();
}

CQLParser::AttributeContext* CQLParser::TagContext::attribute(size_t i) {
  return getRuleContext<CQLParser::AttributeContext>(i);
}


size_t CQLParser::TagContext::getRuleIndex() const {
  return CQLParser::RuleTag;
}


std::any CQLParser::TagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitTag(this);
  else
    return visitor->visitChildren(this);
}

CQLParser::TagContext* CQLParser::tag() {
  TagContext *_localctx = _tracker.createInstance<TagContext>(_ctx, getState());
  enterRule(_localctx, 12, CQLParser::RuleTag);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(CQLParser::LT);
    setState(78);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CQLParser::SOLIDUS) {
      setState(77);
      match(CQLParser::SOLIDUS);
    }
    setState(80);
    match(CQLParser::NAME);
    setState(84);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CQLParser::NAME) {
      setState(81);
      attribute();
      setState(86);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(88);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CQLParser::SOLIDUS) {
      setState(87);
      match(CQLParser::SOLIDUS);
    }
    setState(90);
    match(CQLParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

CQLParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CQLParser::AttributeContext::NAME() {
  return getToken(CQLParser::NAME, 0);
}

tree::TerminalNode* CQLParser::AttributeContext::EQUALS() {
  return getToken(CQLParser::EQUALS, 0);
}

CQLParser::QuotedStringContext* CQLParser::AttributeContext::quotedString() {
  return getRuleContext<CQLParser::QuotedStringContext>(0);
}


size_t CQLParser::AttributeContext::getRuleIndex() const {
  return CQLParser::RuleAttribute;
}


std::any CQLParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

CQLParser::AttributeContext* CQLParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 14, CQLParser::RuleAttribute);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(CQLParser::NAME);
    setState(93);
    match(CQLParser::EQUALS);
    setState(94);
    quotedString();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PositionContext ------------------------------------------------------------------

CQLParser::PositionContext::PositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CQLParser::PositionContext::getRuleIndex() const {
  return CQLParser::RulePosition;
}

void CQLParser::PositionContext::copyFrom(PositionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PositionPositionWordContext ------------------------------------------------------------------

CQLParser::PositionWordContext* CQLParser::PositionPositionWordContext::positionWord() {
  return getRuleContext<CQLParser::PositionWordContext>(0);
}

CQLParser::PositionPositionWordContext::PositionPositionWordContext(PositionContext *ctx) { copyFrom(ctx); }


std::any CQLParser::PositionPositionWordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitPositionPositionWord(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PositionPositionLongContext ------------------------------------------------------------------

tree::TerminalNode* CQLParser::PositionPositionLongContext::LEFT_SQUARE_BRACKET() {
  return getToken(CQLParser::LEFT_SQUARE_BRACKET, 0);
}

tree::TerminalNode* CQLParser::PositionPositionLongContext::RIGHT_SQUARE_BRACKET() {
  return getToken(CQLParser::RIGHT_SQUARE_BRACKET, 0);
}

CQLParser::PositionLongContext* CQLParser::PositionPositionLongContext::positionLong() {
  return getRuleContext<CQLParser::PositionLongContext>(0);
}

CQLParser::PositionPositionLongContext::PositionPositionLongContext(PositionContext *ctx) { copyFrom(ctx); }


std::any CQLParser::PositionPositionLongContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitPositionPositionLong(this);
  else
    return visitor->visitChildren(this);
}
CQLParser::PositionContext* CQLParser::position() {
  PositionContext *_localctx = _tracker.createInstance<PositionContext>(_ctx, getState());
  enterRule(_localctx, 16, CQLParser::RulePosition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(102);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CQLParser::DOUBLE_QUOTED_STRING:
      case CQLParser::SINGLE_QUOTED_STRING: {
        _localctx = _tracker.createInstance<CQLParser::PositionPositionWordContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(96);
        positionWord();
        break;
      }

      case CQLParser::LEFT_SQUARE_BRACKET: {
        _localctx = _tracker.createInstance<CQLParser::PositionPositionLongContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(97);
        match(CQLParser::LEFT_SQUARE_BRACKET);
        setState(99);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1312384) != 0)) {
          setState(98);
          positionLong();
        }
        setState(101);
        match(CQLParser::RIGHT_SQUARE_BRACKET);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PositionWordContext ------------------------------------------------------------------

CQLParser::PositionWordContext::PositionWordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CQLParser::QuotedStringContext* CQLParser::PositionWordContext::quotedString() {
  return getRuleContext<CQLParser::QuotedStringContext>(0);
}


size_t CQLParser::PositionWordContext::getRuleIndex() const {
  return CQLParser::RulePositionWord;
}


std::any CQLParser::PositionWordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitPositionWord(this);
  else
    return visitor->visitChildren(this);
}

CQLParser::PositionWordContext* CQLParser::positionWord() {
  PositionWordContext *_localctx = _tracker.createInstance<PositionWordContext>(_ctx, getState());
  enterRule(_localctx, 18, CQLParser::RulePositionWord);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    quotedString();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PositionLongContext ------------------------------------------------------------------

CQLParser::PositionLongContext::PositionLongContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CQLParser::PositionLongPartContext* CQLParser::PositionLongContext::positionLongPart() {
  return getRuleContext<CQLParser::PositionLongPartContext>(0);
}

CQLParser::BooleanOperatorContext* CQLParser::PositionLongContext::booleanOperator() {
  return getRuleContext<CQLParser::BooleanOperatorContext>(0);
}

CQLParser::PositionLongContext* CQLParser::PositionLongContext::positionLong() {
  return getRuleContext<CQLParser::PositionLongContext>(0);
}


size_t CQLParser::PositionLongContext::getRuleIndex() const {
  return CQLParser::RulePositionLong;
}


std::any CQLParser::PositionLongContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitPositionLong(this);
  else
    return visitor->visitChildren(this);
}

CQLParser::PositionLongContext* CQLParser::positionLong() {
  PositionLongContext *_localctx = _tracker.createInstance<PositionLongContext>(_ctx, getState());
  enterRule(_localctx, 20, CQLParser::RulePositionLong);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    positionLongPart();
    setState(110);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 201326608) != 0)) {
      setState(107);
      booleanOperator();
      setState(108);
      positionLong();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PositionLongPartContext ------------------------------------------------------------------

CQLParser::PositionLongPartContext::PositionLongPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CQLParser::AttValuePairContext* CQLParser::PositionLongPartContext::attValuePair() {
  return getRuleContext<CQLParser::AttValuePairContext>(0);
}

tree::TerminalNode* CQLParser::PositionLongPartContext::LEFT_PARENTHESIS() {
  return getToken(CQLParser::LEFT_PARENTHESIS, 0);
}

CQLParser::PositionLongContext* CQLParser::PositionLongPartContext::positionLong() {
  return getRuleContext<CQLParser::PositionLongContext>(0);
}

tree::TerminalNode* CQLParser::PositionLongPartContext::RIGHT_PARENTHESIS() {
  return getToken(CQLParser::RIGHT_PARENTHESIS, 0);
}

tree::TerminalNode* CQLParser::PositionLongPartContext::EXCLAMATION_MARK() {
  return getToken(CQLParser::EXCLAMATION_MARK, 0);
}

CQLParser::PositionLongPartContext* CQLParser::PositionLongPartContext::positionLongPart() {
  return getRuleContext<CQLParser::PositionLongPartContext>(0);
}


size_t CQLParser::PositionLongPartContext::getRuleIndex() const {
  return CQLParser::RulePositionLongPart;
}


std::any CQLParser::PositionLongPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitPositionLongPart(this);
  else
    return visitor->visitChildren(this);
}

CQLParser::PositionLongPartContext* CQLParser::positionLongPart() {
  PositionLongPartContext *_localctx = _tracker.createInstance<PositionLongPartContext>(_ctx, getState());
  enterRule(_localctx, 22, CQLParser::RulePositionLongPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(119);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(112);
      attValuePair();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(113);
      match(CQLParser::LEFT_PARENTHESIS);
      setState(114);
      positionLong();
      setState(115);
      match(CQLParser::RIGHT_PARENTHESIS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(117);
      match(CQLParser::EXCLAMATION_MARK);
      setState(118);
      positionLongPart();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttValuePairContext ------------------------------------------------------------------

CQLParser::AttValuePairContext::AttValuePairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CQLParser::AttValuePairContext::getRuleIndex() const {
  return CQLParser::RuleAttValuePair;
}

void CQLParser::AttValuePairContext::copyFrom(AttValuePairContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AttValuePairEqualsContext ------------------------------------------------------------------

CQLParser::PropNameContext* CQLParser::AttValuePairEqualsContext::propName() {
  return getRuleContext<CQLParser::PropNameContext>(0);
}

tree::TerminalNode* CQLParser::AttValuePairEqualsContext::EQUALS() {
  return getToken(CQLParser::EQUALS, 0);
}

CQLParser::ValuePartContext* CQLParser::AttValuePairEqualsContext::valuePart() {
  return getRuleContext<CQLParser::ValuePartContext>(0);
}

CQLParser::AttValuePairEqualsContext::AttValuePairEqualsContext(AttValuePairContext *ctx) { copyFrom(ctx); }


std::any CQLParser::AttValuePairEqualsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitAttValuePairEquals(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AttValuePairNotEqualsContext ------------------------------------------------------------------

CQLParser::PropNameContext* CQLParser::AttValuePairNotEqualsContext::propName() {
  return getRuleContext<CQLParser::PropNameContext>(0);
}

CQLParser::ValuePartContext* CQLParser::AttValuePairNotEqualsContext::valuePart() {
  return getRuleContext<CQLParser::ValuePartContext>(0);
}

CQLParser::AttValuePairNotEqualsContext::AttValuePairNotEqualsContext(AttValuePairContext *ctx) { copyFrom(ctx); }


std::any CQLParser::AttValuePairNotEqualsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitAttValuePairNotEquals(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AttValuePairDefaultEqualsContext ------------------------------------------------------------------

CQLParser::ValuePartContext* CQLParser::AttValuePairDefaultEqualsContext::valuePart() {
  return getRuleContext<CQLParser::ValuePartContext>(0);
}

CQLParser::AttValuePairDefaultEqualsContext::AttValuePairDefaultEqualsContext(AttValuePairContext *ctx) { copyFrom(ctx); }


std::any CQLParser::AttValuePairDefaultEqualsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitAttValuePairDefaultEquals(this);
  else
    return visitor->visitChildren(this);
}
CQLParser::AttValuePairContext* CQLParser::attValuePair() {
  AttValuePairContext *_localctx = _tracker.createInstance<AttValuePairContext>(_ctx, getState());
  enterRule(_localctx, 24, CQLParser::RuleAttValuePair);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CQLParser::AttValuePairEqualsContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(121);
      propName();
      setState(122);
      match(CQLParser::EQUALS);
      setState(123);
      valuePart();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CQLParser::AttValuePairNotEqualsContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(125);
      propName();
      setState(126);
      match(CQLParser::T__1);
      setState(127);
      valuePart();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CQLParser::AttValuePairDefaultEqualsContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(129);
      valuePart();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropNameContext ------------------------------------------------------------------

CQLParser::PropNameContext::PropNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CQLParser::PropNameContext::NAME() {
  return getTokens(CQLParser::NAME);
}

tree::TerminalNode* CQLParser::PropNameContext::NAME(size_t i) {
  return getToken(CQLParser::NAME, i);
}

tree::TerminalNode* CQLParser::PropNameContext::SOLIDUS() {
  return getToken(CQLParser::SOLIDUS, 0);
}


size_t CQLParser::PropNameContext::getRuleIndex() const {
  return CQLParser::RulePropName;
}


std::any CQLParser::PropNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitPropName(this);
  else
    return visitor->visitChildren(this);
}

CQLParser::PropNameContext* CQLParser::propName() {
  PropNameContext *_localctx = _tracker.createInstance<PropNameContext>(_ctx, getState());
  enterRule(_localctx, 26, CQLParser::RulePropName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(CQLParser::NAME);
    setState(135);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CQLParser::SOLIDUS) {
      setState(133);
      match(CQLParser::SOLIDUS);
      setState(134);
      match(CQLParser::NAME);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepetitionAmountContext ------------------------------------------------------------------

CQLParser::RepetitionAmountContext::RepetitionAmountContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CQLParser::RepetitionAmountContext::getRuleIndex() const {
  return CQLParser::RuleRepetitionAmount;
}

void CQLParser::RepetitionAmountContext::copyFrom(RepetitionAmountContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RepetitionZeroOrMoreContext ------------------------------------------------------------------

tree::TerminalNode* CQLParser::RepetitionZeroOrMoreContext::ASTERISK() {
  return getToken(CQLParser::ASTERISK, 0);
}

CQLParser::RepetitionZeroOrMoreContext::RepetitionZeroOrMoreContext(RepetitionAmountContext *ctx) { copyFrom(ctx); }


std::any CQLParser::RepetitionZeroOrMoreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitRepetitionZeroOrMore(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepetitionMinMaxContext ------------------------------------------------------------------

tree::TerminalNode* CQLParser::RepetitionMinMaxContext::LEFT_CURLY_BRACKET() {
  return getToken(CQLParser::LEFT_CURLY_BRACKET, 0);
}

std::vector<tree::TerminalNode *> CQLParser::RepetitionMinMaxContext::NUMBER() {
  return getTokens(CQLParser::NUMBER);
}

tree::TerminalNode* CQLParser::RepetitionMinMaxContext::NUMBER(size_t i) {
  return getToken(CQLParser::NUMBER, i);
}

tree::TerminalNode* CQLParser::RepetitionMinMaxContext::LEFT_RIGHT_BRACKET() {
  return getToken(CQLParser::LEFT_RIGHT_BRACKET, 0);
}

CQLParser::RepetitionMinMaxContext::RepetitionMinMaxContext(RepetitionAmountContext *ctx) { copyFrom(ctx); }


std::any CQLParser::RepetitionMinMaxContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitRepetitionMinMax(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepetitionExactlyContext ------------------------------------------------------------------

tree::TerminalNode* CQLParser::RepetitionExactlyContext::LEFT_CURLY_BRACKET() {
  return getToken(CQLParser::LEFT_CURLY_BRACKET, 0);
}

tree::TerminalNode* CQLParser::RepetitionExactlyContext::NUMBER() {
  return getToken(CQLParser::NUMBER, 0);
}

tree::TerminalNode* CQLParser::RepetitionExactlyContext::LEFT_RIGHT_BRACKET() {
  return getToken(CQLParser::LEFT_RIGHT_BRACKET, 0);
}

CQLParser::RepetitionExactlyContext::RepetitionExactlyContext(RepetitionAmountContext *ctx) { copyFrom(ctx); }


std::any CQLParser::RepetitionExactlyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitRepetitionExactly(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepetitionZeroOrOneContext ------------------------------------------------------------------

tree::TerminalNode* CQLParser::RepetitionZeroOrOneContext::QUESTION_MARK() {
  return getToken(CQLParser::QUESTION_MARK, 0);
}

CQLParser::RepetitionZeroOrOneContext::RepetitionZeroOrOneContext(RepetitionAmountContext *ctx) { copyFrom(ctx); }


std::any CQLParser::RepetitionZeroOrOneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitRepetitionZeroOrOne(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RepetitionOneOrMoreContext ------------------------------------------------------------------

tree::TerminalNode* CQLParser::RepetitionOneOrMoreContext::PLUS() {
  return getToken(CQLParser::PLUS, 0);
}

CQLParser::RepetitionOneOrMoreContext::RepetitionOneOrMoreContext(RepetitionAmountContext *ctx) { copyFrom(ctx); }


std::any CQLParser::RepetitionOneOrMoreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitRepetitionOneOrMore(this);
  else
    return visitor->visitChildren(this);
}
CQLParser::RepetitionAmountContext* CQLParser::repetitionAmount() {
  RepetitionAmountContext *_localctx = _tracker.createInstance<RepetitionAmountContext>(_ctx, getState());
  enterRule(_localctx, 28, CQLParser::RuleRepetitionAmount);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CQLParser::RepetitionZeroOrMoreContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(137);
      match(CQLParser::ASTERISK);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CQLParser::RepetitionOneOrMoreContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(138);
      match(CQLParser::PLUS);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CQLParser::RepetitionZeroOrOneContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(139);
      match(CQLParser::QUESTION_MARK);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CQLParser::RepetitionExactlyContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(140);
      match(CQLParser::LEFT_CURLY_BRACKET);
      setState(141);
      match(CQLParser::NUMBER);
      setState(142);
      match(CQLParser::LEFT_RIGHT_BRACKET);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CQLParser::RepetitionMinMaxContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(143);
      match(CQLParser::LEFT_CURLY_BRACKET);
      setState(144);
      match(CQLParser::NUMBER);
      setState(145);
      match(CQLParser::T__2);
      setState(147);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CQLParser::NUMBER) {
        setState(146);
        match(CQLParser::NUMBER);
      }
      setState(149);
      match(CQLParser::LEFT_RIGHT_BRACKET);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuotedStringContext ------------------------------------------------------------------

CQLParser::QuotedStringContext::QuotedStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CQLParser::QuotedStringContext::DOUBLE_QUOTED_STRING() {
  return getToken(CQLParser::DOUBLE_QUOTED_STRING, 0);
}

tree::TerminalNode* CQLParser::QuotedStringContext::SINGLE_QUOTED_STRING() {
  return getToken(CQLParser::SINGLE_QUOTED_STRING, 0);
}


size_t CQLParser::QuotedStringContext::getRuleIndex() const {
  return CQLParser::RuleQuotedString;
}


std::any CQLParser::QuotedStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitQuotedString(this);
  else
    return visitor->visitChildren(this);
}

CQLParser::QuotedStringContext* CQLParser::quotedString() {
  QuotedStringContext *_localctx = _tracker.createInstance<QuotedStringContext>(_ctx, getState());
  enterRule(_localctx, 30, CQLParser::RuleQuotedString);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    _la = _input->LA(1);
    if (!(_la == CQLParser::DOUBLE_QUOTED_STRING

    || _la == CQLParser::SINGLE_QUOTED_STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanOperatorContext ------------------------------------------------------------------

CQLParser::BooleanOperatorContext::BooleanOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CQLParser::BooleanOperatorContext::getRuleIndex() const {
  return CQLParser::RuleBooleanOperator;
}

void CQLParser::BooleanOperatorContext::copyFrom(BooleanOperatorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OrContext ------------------------------------------------------------------

tree::TerminalNode* CQLParser::OrContext::VERTICAL_LINE() {
  return getToken(CQLParser::VERTICAL_LINE, 0);
}

CQLParser::OrContext::OrContext(BooleanOperatorContext *ctx) { copyFrom(ctx); }


std::any CQLParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

tree::TerminalNode* CQLParser::AndContext::AMPERSAND() {
  return getToken(CQLParser::AMPERSAND, 0);
}

CQLParser::AndContext::AndContext(BooleanOperatorContext *ctx) { copyFrom(ctx); }


std::any CQLParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ImplicationContext ------------------------------------------------------------------

CQLParser::ImplicationContext::ImplicationContext(BooleanOperatorContext *ctx) { copyFrom(ctx); }


std::any CQLParser::ImplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitImplication(this);
  else
    return visitor->visitChildren(this);
}
CQLParser::BooleanOperatorContext* CQLParser::booleanOperator() {
  BooleanOperatorContext *_localctx = _tracker.createInstance<BooleanOperatorContext>(_ctx, getState());
  enterRule(_localctx, 32, CQLParser::RuleBooleanOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(157);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CQLParser::AMPERSAND: {
        _localctx = _tracker.createInstance<CQLParser::AndContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(154);
        match(CQLParser::AMPERSAND);
        break;
      }

      case CQLParser::VERTICAL_LINE: {
        _localctx = _tracker.createInstance<CQLParser::OrContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(155);
        match(CQLParser::VERTICAL_LINE);
        break;
      }

      case CQLParser::T__3: {
        _localctx = _tracker.createInstance<CQLParser::ImplicationContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(156);
        match(CQLParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValuePartContext ------------------------------------------------------------------

CQLParser::ValuePartContext::ValuePartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CQLParser::ValuePartContext::getRuleIndex() const {
  return CQLParser::RuleValuePart;
}

void CQLParser::ValuePartContext::copyFrom(ValuePartContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ValuePartStringContext ------------------------------------------------------------------

CQLParser::QuotedStringContext* CQLParser::ValuePartStringContext::quotedString() {
  return getRuleContext<CQLParser::QuotedStringContext>(0);
}

CQLParser::ValuePartStringContext::ValuePartStringContext(ValuePartContext *ctx) { copyFrom(ctx); }


std::any CQLParser::ValuePartStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitValuePartString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ValuePartParenthesisedContext ------------------------------------------------------------------

tree::TerminalNode* CQLParser::ValuePartParenthesisedContext::LEFT_PARENTHESIS() {
  return getToken(CQLParser::LEFT_PARENTHESIS, 0);
}

CQLParser::ValueContext* CQLParser::ValuePartParenthesisedContext::value() {
  return getRuleContext<CQLParser::ValueContext>(0);
}

tree::TerminalNode* CQLParser::ValuePartParenthesisedContext::RIGHT_PARENTHESIS() {
  return getToken(CQLParser::RIGHT_PARENTHESIS, 0);
}

CQLParser::ValuePartParenthesisedContext::ValuePartParenthesisedContext(ValuePartContext *ctx) { copyFrom(ctx); }


std::any CQLParser::ValuePartParenthesisedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitValuePartParenthesised(this);
  else
    return visitor->visitChildren(this);
}
CQLParser::ValuePartContext* CQLParser::valuePart() {
  ValuePartContext *_localctx = _tracker.createInstance<ValuePartContext>(_ctx, getState());
  enterRule(_localctx, 34, CQLParser::RuleValuePart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(164);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CQLParser::DOUBLE_QUOTED_STRING:
      case CQLParser::SINGLE_QUOTED_STRING: {
        _localctx = _tracker.createInstance<CQLParser::ValuePartStringContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(159);
        quotedString();
        break;
      }

      case CQLParser::LEFT_PARENTHESIS: {
        _localctx = _tracker.createInstance<CQLParser::ValuePartParenthesisedContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(160);
        match(CQLParser::LEFT_PARENTHESIS);
        setState(161);
        value();
        setState(162);
        match(CQLParser::RIGHT_PARENTHESIS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

CQLParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CQLParser::ValueContext::getRuleIndex() const {
  return CQLParser::RuleValue;
}

void CQLParser::ValueContext::copyFrom(ValueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ValueWithoutContext ------------------------------------------------------------------

CQLParser::ValuePartContext* CQLParser::ValueWithoutContext::valuePart() {
  return getRuleContext<CQLParser::ValuePartContext>(0);
}

CQLParser::ValueWithoutContext::ValueWithoutContext(ValueContext *ctx) { copyFrom(ctx); }


std::any CQLParser::ValueWithoutContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitValueWithout(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ValueWithContext ------------------------------------------------------------------

CQLParser::ValuePartContext* CQLParser::ValueWithContext::valuePart() {
  return getRuleContext<CQLParser::ValuePartContext>(0);
}

CQLParser::BooleanOperatorContext* CQLParser::ValueWithContext::booleanOperator() {
  return getRuleContext<CQLParser::BooleanOperatorContext>(0);
}

CQLParser::ValueContext* CQLParser::ValueWithContext::value() {
  return getRuleContext<CQLParser::ValueContext>(0);
}

CQLParser::ValueWithContext::ValueWithContext(ValueContext *ctx) { copyFrom(ctx); }


std::any CQLParser::ValueWithContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CQLVisitor*>(visitor))
    return parserVisitor->visitValueWith(this);
  else
    return visitor->visitChildren(this);
}
CQLParser::ValueContext* CQLParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 36, CQLParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(171);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CQLParser::ValueWithContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(166);
      valuePart();
      setState(167);
      booleanOperator();
      setState(168);
      value();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CQLParser::ValueWithoutContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(170);
      valuePart();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void CQLParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cqlParserInitialize();
#else
  ::antlr4::internal::call_once(cqlParserOnceFlag, cqlParserInitialize);
#endif
}
