#include "lexer.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
#include <regex>

using namespace hp_compiler;

const std::vector<Lexer::Token> Lexer::m_acceptedTokens =
 {"[{]", "[}]", "[\\(]", "[\\)]", "[;]", "int", "return", "[a-zA-Z]\\w*", "[0-9]+"};

std::queue<Lexer::Token> Lexer::Lex(const std::string& filename)
{
    std::queue<Lexer::Token> result;

    std::ifstream stream(filename);

    std::stringstream fileStr;
    fileStr << stream.rdbuf();

    std::string file = fileStr.str();

    std::string regexStr = "(";
    for (const auto& token : m_acceptedTokens)
    {
        regexStr += token + "|";       
    }
    regexStr.erase(regexStr.length()-1);
    regexStr += ")";

    std::regex regexWord(regexStr);
    auto wordsBegin = std::sregex_iterator(file.begin(), file.end(), regexWord);
    auto wordsEnd = std::sregex_iterator();

    for (auto it = wordsBegin; it != wordsEnd; ++it)
    {
        std::smatch match = *it;
        std::string matchStr = match.str();
        result.push(matchStr);
    }

    return result;
}