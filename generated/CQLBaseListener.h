
// Generated from ./CQL.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CQLListener.h"


/**
 * This class provides an empty implementation of CQLListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CQLBaseListener : public CQLListener {
public:

  virtual void enterQuery(CQLParser::QueryContext * /*ctx*/) override { }
  virtual void exitQuery(CQLParser::QueryContext * /*ctx*/) override { }

  virtual void enterComplexQuery(CQLParser::ComplexQueryContext * /*ctx*/) override { }
  virtual void exitComplexQuery(CQLParser::ComplexQueryContext * /*ctx*/) override { }

  virtual void enterWithin(CQLParser::WithinContext * /*ctx*/) override { }
  virtual void exitWithin(CQLParser::WithinContext * /*ctx*/) override { }

  virtual void enterContaining(CQLParser::ContainingContext * /*ctx*/) override { }
  virtual void exitContaining(CQLParser::ContainingContext * /*ctx*/) override { }

  virtual void enterSimpleQuery(CQLParser::SimpleQueryContext * /*ctx*/) override { }
  virtual void exitSimpleQuery(CQLParser::SimpleQueryContext * /*ctx*/) override { }

  virtual void enterSequence(CQLParser::SequenceContext * /*ctx*/) override { }
  virtual void exitSequence(CQLParser::SequenceContext * /*ctx*/) override { }

  virtual void enterSequencePart(CQLParser::SequencePartContext * /*ctx*/) override { }
  virtual void exitSequencePart(CQLParser::SequencePartContext * /*ctx*/) override { }

  virtual void enterTag(CQLParser::TagContext * /*ctx*/) override { }
  virtual void exitTag(CQLParser::TagContext * /*ctx*/) override { }

  virtual void enterAttribute(CQLParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(CQLParser::AttributeContext * /*ctx*/) override { }

  virtual void enterPositionPositionWord(CQLParser::PositionPositionWordContext * /*ctx*/) override { }
  virtual void exitPositionPositionWord(CQLParser::PositionPositionWordContext * /*ctx*/) override { }

  virtual void enterPositionPositionLong(CQLParser::PositionPositionLongContext * /*ctx*/) override { }
  virtual void exitPositionPositionLong(CQLParser::PositionPositionLongContext * /*ctx*/) override { }

  virtual void enterPositionWord(CQLParser::PositionWordContext * /*ctx*/) override { }
  virtual void exitPositionWord(CQLParser::PositionWordContext * /*ctx*/) override { }

  virtual void enterPositionLong(CQLParser::PositionLongContext * /*ctx*/) override { }
  virtual void exitPositionLong(CQLParser::PositionLongContext * /*ctx*/) override { }

  virtual void enterPositionLongPart(CQLParser::PositionLongPartContext * /*ctx*/) override { }
  virtual void exitPositionLongPart(CQLParser::PositionLongPartContext * /*ctx*/) override { }

  virtual void enterAttValuePairEquals(CQLParser::AttValuePairEqualsContext * /*ctx*/) override { }
  virtual void exitAttValuePairEquals(CQLParser::AttValuePairEqualsContext * /*ctx*/) override { }

  virtual void enterAttValuePairNotEquals(CQLParser::AttValuePairNotEqualsContext * /*ctx*/) override { }
  virtual void exitAttValuePairNotEquals(CQLParser::AttValuePairNotEqualsContext * /*ctx*/) override { }

  virtual void enterAttValuePairDefaultEquals(CQLParser::AttValuePairDefaultEqualsContext * /*ctx*/) override { }
  virtual void exitAttValuePairDefaultEquals(CQLParser::AttValuePairDefaultEqualsContext * /*ctx*/) override { }

  virtual void enterPropName(CQLParser::PropNameContext * /*ctx*/) override { }
  virtual void exitPropName(CQLParser::PropNameContext * /*ctx*/) override { }

  virtual void enterRepetitionZeroOrMore(CQLParser::RepetitionZeroOrMoreContext * /*ctx*/) override { }
  virtual void exitRepetitionZeroOrMore(CQLParser::RepetitionZeroOrMoreContext * /*ctx*/) override { }

  virtual void enterRepetitionOneOrMore(CQLParser::RepetitionOneOrMoreContext * /*ctx*/) override { }
  virtual void exitRepetitionOneOrMore(CQLParser::RepetitionOneOrMoreContext * /*ctx*/) override { }

  virtual void enterRepetitionZeroOrOne(CQLParser::RepetitionZeroOrOneContext * /*ctx*/) override { }
  virtual void exitRepetitionZeroOrOne(CQLParser::RepetitionZeroOrOneContext * /*ctx*/) override { }

  virtual void enterRepetitionExactly(CQLParser::RepetitionExactlyContext * /*ctx*/) override { }
  virtual void exitRepetitionExactly(CQLParser::RepetitionExactlyContext * /*ctx*/) override { }

  virtual void enterRepetitionMinMax(CQLParser::RepetitionMinMaxContext * /*ctx*/) override { }
  virtual void exitRepetitionMinMax(CQLParser::RepetitionMinMaxContext * /*ctx*/) override { }

  virtual void enterQuotedString(CQLParser::QuotedStringContext * /*ctx*/) override { }
  virtual void exitQuotedString(CQLParser::QuotedStringContext * /*ctx*/) override { }

  virtual void enterAnd(CQLParser::AndContext * /*ctx*/) override { }
  virtual void exitAnd(CQLParser::AndContext * /*ctx*/) override { }

  virtual void enterOr(CQLParser::OrContext * /*ctx*/) override { }
  virtual void exitOr(CQLParser::OrContext * /*ctx*/) override { }

  virtual void enterImplication(CQLParser::ImplicationContext * /*ctx*/) override { }
  virtual void exitImplication(CQLParser::ImplicationContext * /*ctx*/) override { }

  virtual void enterValuePartString(CQLParser::ValuePartStringContext * /*ctx*/) override { }
  virtual void exitValuePartString(CQLParser::ValuePartStringContext * /*ctx*/) override { }

  virtual void enterValuePartParenthesised(CQLParser::ValuePartParenthesisedContext * /*ctx*/) override { }
  virtual void exitValuePartParenthesised(CQLParser::ValuePartParenthesisedContext * /*ctx*/) override { }

  virtual void enterValueWith(CQLParser::ValueWithContext * /*ctx*/) override { }
  virtual void exitValueWith(CQLParser::ValueWithContext * /*ctx*/) override { }

  virtual void enterValueWithout(CQLParser::ValueWithoutContext * /*ctx*/) override { }
  virtual void exitValueWithout(CQLParser::ValueWithoutContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

