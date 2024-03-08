
// Generated from ./CQL.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CQLParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, WITHIN = 5, CONTAINING = 6, 
    NAME = 7, NUMBER = 8, DOUBLE_QUOTED_STRING = 9, SINGLE_QUOTED_STRING = 10, 
    WS = 11, LT = 12, GT = 13, SOLIDUS = 14, EQUALS = 15, LEFT_SQUARE_BRACKET = 16, 
    RIGHT_SQUARE_BRACKET = 17, LEFT_PARENTHESIS = 18, RIGHT_PARENTHESIS = 19, 
    EXCLAMATION_MARK = 20, ASTERISK = 21, PLUS = 22, QUESTION_MARK = 23, 
    LEFT_CURLY_BRACKET = 24, LEFT_RIGHT_BRACKET = 25, AMPERSAND = 26, VERTICAL_LINE = 27, 
    HYPHEN_MINUS = 28
  };

  enum {
    RuleQuery = 0, RuleComplexQuery = 1, RuleQueryOperator = 2, RuleSimpleQuery = 3, 
    RuleSequence = 4, RuleSequencePart = 5, RuleTag = 6, RuleAttribute = 7, 
    RulePosition = 8, RulePositionWord = 9, RulePositionLong = 10, RulePositionLongPart = 11, 
    RuleAttValuePair = 12, RulePropName = 13, RuleRepetitionAmount = 14, 
    RuleQuotedString = 15, RuleBooleanOperator = 16, RuleValuePart = 17, 
    RuleValue = 18
  };

  explicit CQLParser(antlr4::TokenStream *input);

  CQLParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CQLParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class QueryContext;
  class ComplexQueryContext;
  class QueryOperatorContext;
  class SimpleQueryContext;
  class SequenceContext;
  class SequencePartContext;
  class TagContext;
  class AttributeContext;
  class PositionContext;
  class PositionWordContext;
  class PositionLongContext;
  class PositionLongPartContext;
  class AttValuePairContext;
  class PropNameContext;
  class RepetitionAmountContext;
  class QuotedStringContext;
  class BooleanOperatorContext;
  class ValuePartContext;
  class ValueContext; 

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComplexQueryContext *complexQuery();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();

  class  ComplexQueryContext : public antlr4::ParserRuleContext {
  public:
    ComplexQueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleQueryContext *simpleQuery();
    QueryOperatorContext *queryOperator();
    ComplexQueryContext *complexQuery();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComplexQueryContext* complexQuery();

  class  QueryOperatorContext : public antlr4::ParserRuleContext {
  public:
    QueryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    QueryOperatorContext() = default;
    void copyFrom(QueryOperatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WithinContext : public QueryOperatorContext {
  public:
    WithinContext(QueryOperatorContext *ctx);

    antlr4::tree::TerminalNode *WITHIN();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ContainingContext : public QueryOperatorContext {
  public:
    ContainingContext(QueryOperatorContext *ctx);

    antlr4::tree::TerminalNode *CONTAINING();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  QueryOperatorContext* queryOperator();

  class  SimpleQueryContext : public antlr4::ParserRuleContext {
  public:
    SimpleQueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SequenceContext *sequence();
    BooleanOperatorContext *booleanOperator();
    SimpleQueryContext *simpleQuery();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleQueryContext* simpleQuery();

  class  SequenceContext : public antlr4::ParserRuleContext {
  public:
    SequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SequencePartContext *> sequencePart();
    SequencePartContext* sequencePart(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SequenceContext* sequence();

  class  SequencePartContext : public antlr4::ParserRuleContext {
  public:
    SequencePartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TagContext *tag();
    PositionContext *position();
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    ComplexQueryContext *complexQuery();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();
    RepetitionAmountContext *repetitionAmount();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SequencePartContext* sequencePart();

  class  TagContext : public antlr4::ParserRuleContext {
  public:
    TagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> SOLIDUS();
    antlr4::tree::TerminalNode* SOLIDUS(size_t i);
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TagContext* tag();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *EQUALS();
    QuotedStringContext *quotedString();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeContext* attribute();

  class  PositionContext : public antlr4::ParserRuleContext {
  public:
    PositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PositionContext() = default;
    void copyFrom(PositionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PositionPositionWordContext : public PositionContext {
  public:
    PositionPositionWordContext(PositionContext *ctx);

    PositionWordContext *positionWord();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PositionPositionLongContext : public PositionContext {
  public:
    PositionPositionLongContext(PositionContext *ctx);

    antlr4::tree::TerminalNode *LEFT_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_SQUARE_BRACKET();
    PositionLongContext *positionLong();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PositionContext* position();

  class  PositionWordContext : public antlr4::ParserRuleContext {
  public:
    PositionWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QuotedStringContext *quotedString();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PositionWordContext* positionWord();

  class  PositionLongContext : public antlr4::ParserRuleContext {
  public:
    PositionLongContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PositionLongPartContext *positionLongPart();
    BooleanOperatorContext *booleanOperator();
    PositionLongContext *positionLong();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PositionLongContext* positionLong();

  class  PositionLongPartContext : public antlr4::ParserRuleContext {
  public:
    PositionLongPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttValuePairContext *attValuePair();
    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    PositionLongContext *positionLong();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();
    antlr4::tree::TerminalNode *EXCLAMATION_MARK();
    PositionLongPartContext *positionLongPart();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PositionLongPartContext* positionLongPart();

  class  AttValuePairContext : public antlr4::ParserRuleContext {
  public:
    AttValuePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AttValuePairContext() = default;
    void copyFrom(AttValuePairContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AttValuePairEqualsContext : public AttValuePairContext {
  public:
    AttValuePairEqualsContext(AttValuePairContext *ctx);

    PropNameContext *propName();
    antlr4::tree::TerminalNode *EQUALS();
    ValuePartContext *valuePart();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AttValuePairNotEqualsContext : public AttValuePairContext {
  public:
    AttValuePairNotEqualsContext(AttValuePairContext *ctx);

    PropNameContext *propName();
    ValuePartContext *valuePart();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AttValuePairDefaultEqualsContext : public AttValuePairContext {
  public:
    AttValuePairDefaultEqualsContext(AttValuePairContext *ctx);

    ValuePartContext *valuePart();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AttValuePairContext* attValuePair();

  class  PropNameContext : public antlr4::ParserRuleContext {
  public:
    PropNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    antlr4::tree::TerminalNode *SOLIDUS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropNameContext* propName();

  class  RepetitionAmountContext : public antlr4::ParserRuleContext {
  public:
    RepetitionAmountContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RepetitionAmountContext() = default;
    void copyFrom(RepetitionAmountContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RepetitionZeroOrMoreContext : public RepetitionAmountContext {
  public:
    RepetitionZeroOrMoreContext(RepetitionAmountContext *ctx);

    antlr4::tree::TerminalNode *ASTERISK();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RepetitionMinMaxContext : public RepetitionAmountContext {
  public:
    RepetitionMinMaxContext(RepetitionAmountContext *ctx);

    antlr4::tree::TerminalNode *LEFT_CURLY_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    antlr4::tree::TerminalNode *LEFT_RIGHT_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RepetitionExactlyContext : public RepetitionAmountContext {
  public:
    RepetitionExactlyContext(RepetitionAmountContext *ctx);

    antlr4::tree::TerminalNode *LEFT_CURLY_BRACKET();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *LEFT_RIGHT_BRACKET();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RepetitionZeroOrOneContext : public RepetitionAmountContext {
  public:
    RepetitionZeroOrOneContext(RepetitionAmountContext *ctx);

    antlr4::tree::TerminalNode *QUESTION_MARK();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RepetitionOneOrMoreContext : public RepetitionAmountContext {
  public:
    RepetitionOneOrMoreContext(RepetitionAmountContext *ctx);

    antlr4::tree::TerminalNode *PLUS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RepetitionAmountContext* repetitionAmount();

  class  QuotedStringContext : public antlr4::ParserRuleContext {
  public:
    QuotedStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOUBLE_QUOTED_STRING();
    antlr4::tree::TerminalNode *SINGLE_QUOTED_STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuotedStringContext* quotedString();

  class  BooleanOperatorContext : public antlr4::ParserRuleContext {
  public:
    BooleanOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BooleanOperatorContext() = default;
    void copyFrom(BooleanOperatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OrContext : public BooleanOperatorContext {
  public:
    OrContext(BooleanOperatorContext *ctx);

    antlr4::tree::TerminalNode *VERTICAL_LINE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndContext : public BooleanOperatorContext {
  public:
    AndContext(BooleanOperatorContext *ctx);

    antlr4::tree::TerminalNode *AMPERSAND();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ImplicationContext : public BooleanOperatorContext {
  public:
    ImplicationContext(BooleanOperatorContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BooleanOperatorContext* booleanOperator();

  class  ValuePartContext : public antlr4::ParserRuleContext {
  public:
    ValuePartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ValuePartContext() = default;
    void copyFrom(ValuePartContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ValuePartStringContext : public ValuePartContext {
  public:
    ValuePartStringContext(ValuePartContext *ctx);

    QuotedStringContext *quotedString();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ValuePartParenthesisedContext : public ValuePartContext {
  public:
    ValuePartParenthesisedContext(ValuePartContext *ctx);

    antlr4::tree::TerminalNode *LEFT_PARENTHESIS();
    ValueContext *value();
    antlr4::tree::TerminalNode *RIGHT_PARENTHESIS();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ValuePartContext* valuePart();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ValueContext() = default;
    void copyFrom(ValueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ValueWithoutContext : public ValueContext {
  public:
    ValueWithoutContext(ValueContext *ctx);

    ValuePartContext *valuePart();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ValueWithContext : public ValueContext {
  public:
    ValueWithContext(ValueContext *ctx);

    ValuePartContext *valuePart();
    BooleanOperatorContext *booleanOperator();
    ValueContext *value();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ValueContext* value();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

