
// Generated from ./CQL.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CQLParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CQLParser.
 */
class  CQLVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CQLParser.
   */
    virtual std::any visitQuery(CQLParser::QueryContext *context) = 0;

    virtual std::any visitComplexQuery(CQLParser::ComplexQueryContext *context) = 0;

    virtual std::any visitWithin(CQLParser::WithinContext *context) = 0;

    virtual std::any visitContaining(CQLParser::ContainingContext *context) = 0;

    virtual std::any visitSimpleQuery(CQLParser::SimpleQueryContext *context) = 0;

    virtual std::any visitSequence(CQLParser::SequenceContext *context) = 0;

    virtual std::any visitSequencePart(CQLParser::SequencePartContext *context) = 0;

    virtual std::any visitTag(CQLParser::TagContext *context) = 0;

    virtual std::any visitAttribute(CQLParser::AttributeContext *context) = 0;

    virtual std::any visitPositionPositionWord(CQLParser::PositionPositionWordContext *context) = 0;

    virtual std::any visitPositionPositionLong(CQLParser::PositionPositionLongContext *context) = 0;

    virtual std::any visitPositionWord(CQLParser::PositionWordContext *context) = 0;

    virtual std::any visitPositionLong(CQLParser::PositionLongContext *context) = 0;

    virtual std::any visitPositionLongPart(CQLParser::PositionLongPartContext *context) = 0;

    virtual std::any visitAttValuePairEquals(CQLParser::AttValuePairEqualsContext *context) = 0;

    virtual std::any visitAttValuePairNotEquals(CQLParser::AttValuePairNotEqualsContext *context) = 0;

    virtual std::any visitAttValuePairDefaultEquals(CQLParser::AttValuePairDefaultEqualsContext *context) = 0;

    virtual std::any visitPropName(CQLParser::PropNameContext *context) = 0;

    virtual std::any visitRepetitionZeroOrMore(CQLParser::RepetitionZeroOrMoreContext *context) = 0;

    virtual std::any visitRepetitionOneOrMore(CQLParser::RepetitionOneOrMoreContext *context) = 0;

    virtual std::any visitRepetitionZeroOrOne(CQLParser::RepetitionZeroOrOneContext *context) = 0;

    virtual std::any visitRepetitionExactly(CQLParser::RepetitionExactlyContext *context) = 0;

    virtual std::any visitRepetitionMinMax(CQLParser::RepetitionMinMaxContext *context) = 0;

    virtual std::any visitQuotedString(CQLParser::QuotedStringContext *context) = 0;

    virtual std::any visitAnd(CQLParser::AndContext *context) = 0;

    virtual std::any visitOr(CQLParser::OrContext *context) = 0;

    virtual std::any visitImplication(CQLParser::ImplicationContext *context) = 0;

    virtual std::any visitValuePartString(CQLParser::ValuePartStringContext *context) = 0;

    virtual std::any visitValuePartParenthesised(CQLParser::ValuePartParenthesisedContext *context) = 0;

    virtual std::any visitValueWith(CQLParser::ValueWithContext *context) = 0;

    virtual std::any visitValueWithout(CQLParser::ValueWithoutContext *context) = 0;


};

