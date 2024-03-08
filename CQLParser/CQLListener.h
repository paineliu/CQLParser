
// Generated from ./CQL.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CQLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CQLParser.
 */
class  CQLListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterQuery(CQLParser::QueryContext *ctx) = 0;
  virtual void exitQuery(CQLParser::QueryContext *ctx) = 0;

  virtual void enterComplexQuery(CQLParser::ComplexQueryContext *ctx) = 0;
  virtual void exitComplexQuery(CQLParser::ComplexQueryContext *ctx) = 0;

  virtual void enterWithin(CQLParser::WithinContext *ctx) = 0;
  virtual void exitWithin(CQLParser::WithinContext *ctx) = 0;

  virtual void enterContaining(CQLParser::ContainingContext *ctx) = 0;
  virtual void exitContaining(CQLParser::ContainingContext *ctx) = 0;

  virtual void enterSimpleQuery(CQLParser::SimpleQueryContext *ctx) = 0;
  virtual void exitSimpleQuery(CQLParser::SimpleQueryContext *ctx) = 0;

  virtual void enterSequence(CQLParser::SequenceContext *ctx) = 0;
  virtual void exitSequence(CQLParser::SequenceContext *ctx) = 0;

  virtual void enterSequencePart(CQLParser::SequencePartContext *ctx) = 0;
  virtual void exitSequencePart(CQLParser::SequencePartContext *ctx) = 0;

  virtual void enterTag(CQLParser::TagContext *ctx) = 0;
  virtual void exitTag(CQLParser::TagContext *ctx) = 0;

  virtual void enterAttribute(CQLParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(CQLParser::AttributeContext *ctx) = 0;

  virtual void enterPositionPositionWord(CQLParser::PositionPositionWordContext *ctx) = 0;
  virtual void exitPositionPositionWord(CQLParser::PositionPositionWordContext *ctx) = 0;

  virtual void enterPositionPositionLong(CQLParser::PositionPositionLongContext *ctx) = 0;
  virtual void exitPositionPositionLong(CQLParser::PositionPositionLongContext *ctx) = 0;

  virtual void enterPositionWord(CQLParser::PositionWordContext *ctx) = 0;
  virtual void exitPositionWord(CQLParser::PositionWordContext *ctx) = 0;

  virtual void enterPositionLong(CQLParser::PositionLongContext *ctx) = 0;
  virtual void exitPositionLong(CQLParser::PositionLongContext *ctx) = 0;

  virtual void enterPositionLongPart(CQLParser::PositionLongPartContext *ctx) = 0;
  virtual void exitPositionLongPart(CQLParser::PositionLongPartContext *ctx) = 0;

  virtual void enterAttValuePairEquals(CQLParser::AttValuePairEqualsContext *ctx) = 0;
  virtual void exitAttValuePairEquals(CQLParser::AttValuePairEqualsContext *ctx) = 0;

  virtual void enterAttValuePairNotEquals(CQLParser::AttValuePairNotEqualsContext *ctx) = 0;
  virtual void exitAttValuePairNotEquals(CQLParser::AttValuePairNotEqualsContext *ctx) = 0;

  virtual void enterAttValuePairDefaultEquals(CQLParser::AttValuePairDefaultEqualsContext *ctx) = 0;
  virtual void exitAttValuePairDefaultEquals(CQLParser::AttValuePairDefaultEqualsContext *ctx) = 0;

  virtual void enterPropName(CQLParser::PropNameContext *ctx) = 0;
  virtual void exitPropName(CQLParser::PropNameContext *ctx) = 0;

  virtual void enterRepetitionZeroOrMore(CQLParser::RepetitionZeroOrMoreContext *ctx) = 0;
  virtual void exitRepetitionZeroOrMore(CQLParser::RepetitionZeroOrMoreContext *ctx) = 0;

  virtual void enterRepetitionOneOrMore(CQLParser::RepetitionOneOrMoreContext *ctx) = 0;
  virtual void exitRepetitionOneOrMore(CQLParser::RepetitionOneOrMoreContext *ctx) = 0;

  virtual void enterRepetitionZeroOrOne(CQLParser::RepetitionZeroOrOneContext *ctx) = 0;
  virtual void exitRepetitionZeroOrOne(CQLParser::RepetitionZeroOrOneContext *ctx) = 0;

  virtual void enterRepetitionExactly(CQLParser::RepetitionExactlyContext *ctx) = 0;
  virtual void exitRepetitionExactly(CQLParser::RepetitionExactlyContext *ctx) = 0;

  virtual void enterRepetitionMinMax(CQLParser::RepetitionMinMaxContext *ctx) = 0;
  virtual void exitRepetitionMinMax(CQLParser::RepetitionMinMaxContext *ctx) = 0;

  virtual void enterQuotedString(CQLParser::QuotedStringContext *ctx) = 0;
  virtual void exitQuotedString(CQLParser::QuotedStringContext *ctx) = 0;

  virtual void enterAnd(CQLParser::AndContext *ctx) = 0;
  virtual void exitAnd(CQLParser::AndContext *ctx) = 0;

  virtual void enterOr(CQLParser::OrContext *ctx) = 0;
  virtual void exitOr(CQLParser::OrContext *ctx) = 0;

  virtual void enterImplication(CQLParser::ImplicationContext *ctx) = 0;
  virtual void exitImplication(CQLParser::ImplicationContext *ctx) = 0;

  virtual void enterValuePartString(CQLParser::ValuePartStringContext *ctx) = 0;
  virtual void exitValuePartString(CQLParser::ValuePartStringContext *ctx) = 0;

  virtual void enterValuePartParenthesised(CQLParser::ValuePartParenthesisedContext *ctx) = 0;
  virtual void exitValuePartParenthesised(CQLParser::ValuePartParenthesisedContext *ctx) = 0;

  virtual void enterValueWith(CQLParser::ValueWithContext *ctx) = 0;
  virtual void exitValueWith(CQLParser::ValueWithContext *ctx) = 0;

  virtual void enterValueWithout(CQLParser::ValueWithoutContext *ctx) = 0;
  virtual void exitValueWithout(CQLParser::ValueWithoutContext *ctx) = 0;


};

