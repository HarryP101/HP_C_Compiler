#include "lexer.h"
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <iostream>
#include <regex>

using namespace hp_compiler;

const std::vector<Lexer::Token> Lexer::m_acceptedTokens = {"[{]", "[}]"};

std::vector<Lexer::Token> Lexer::Lex(const std::string& filename)
{
    std::vector<Lexer::Token> result;

    std::ifstream stream(filename);

    std::stringstream fileStr;
    fileStr << stream.rdbuf();

    std::string file = fileStr.str();

    std::smatch m;
    for (const auto& token : m_acceptedTokens)
    {
        std::regex regexp(token);

        regex_search(file, m, regexp);

        result.push_back(m.str());
    }

    return result;
}