﻿/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

 //
 //  main.cpp
 //  antlr4-cpp-demo
 //
 //  Created by Mike Lischke on 13.03.16.
 //

#include <iostream>
#include <fstream>
#include <stdio.h>
#include "antlr4-runtime.h"
#include "./generated/CQLLexer.h"
#include "./generated/CQLParser.h"
#include "./generated/CQLVisitor.h"
#include "./generated/CQLBaseVisitor.h"
#include <Windows.h>

#pragma execution_character_set("utf-8")
using namespace antlr4;
using namespace std;

void cql_parser(const char* cql_str)
{
	ANTLRInputStream input(cql_str);
	CQLLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	auto t = tokens.getTokens();

	tokens.fill();
	for (auto token : tokens.getTokens()) {
		std::cout << token->toString() << std::endl;
	}

	CQLParser parser(&tokens);
	tree::ParseTree* tree = parser.query();
	std::cout << tree->toStringTree(&parser) << std::endl;
	CQLVisitor* evalVisitor = new CQLBaseVisitor();
	evalVisitor->visit(tree);
	delete evalVisitor;
}

int main(int argc, const char* argv[]) {
	ifstream infile;
	infile.open("test.txt", ios::in);
	if (infile.is_open())
	{
		string buf;
		while (getline(infile, buf))
		{
			cql_parser(buf.c_str());
		}
		infile.close();
	}

	return 0;
}
