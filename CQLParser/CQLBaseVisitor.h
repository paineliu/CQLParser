
// Generated from ./CQL.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CQLVisitor.h"


/**
 * This class provides an empty implementation of CQLVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CQLBaseVisitor : public CQLVisitor {
public:

  virtual std::any visitQuery(CQLParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexQuery(CQLParser::ComplexQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWithin(CQLParser::WithinContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContaining(CQLParser::ContainingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleQuery(CQLParser::SimpleQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequence(CQLParser::SequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequencePart(CQLParser::SequencePartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTag(CQLParser::TagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute(CQLParser::AttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPositionPositionWord(CQLParser::PositionPositionWordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPositionPositionLong(CQLParser::PositionPositionLongContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPositionWord(CQLParser::PositionWordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPositionLong(CQLParser::PositionLongContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPositionLongPart(CQLParser::PositionLongPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttValuePairEquals(CQLParser::AttValuePairEqualsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttValuePairNotEquals(CQLParser::AttValuePairNotEqualsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttValuePairDefaultEquals(CQLParser::AttValuePairDefaultEqualsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPropName(CQLParser::PropNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepetitionZeroOrMore(CQLParser::RepetitionZeroOrMoreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepetitionOneOrMore(CQLParser::RepetitionOneOrMoreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepetitionZeroOrOne(CQLParser::RepetitionZeroOrOneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepetitionExactly(CQLParser::RepetitionExactlyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepetitionMinMax(CQLParser::RepetitionMinMaxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuotedString(CQLParser::QuotedStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnd(CQLParser::AndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOr(CQLParser::OrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplication(CQLParser::ImplicationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValuePartString(CQLParser::ValuePartStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValuePartParenthesised(CQLParser::ValuePartParenthesisedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueWith(CQLParser::ValueWithContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueWithout(CQLParser::ValueWithoutContext *ctx) override {
    return visitChildren(ctx);
  }


};

