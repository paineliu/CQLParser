
// Generated from ./CQL.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CQLLexer : public antlr4::Lexer {
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

  explicit CQLLexer(antlr4::CharStream *input);

  ~CQLLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

