#pragma once
#include <vector>
#include <string>
#include <queue>

namespace hp_compiler
{
class Lexer
{
public:
    typedef std::string Token;
    static std::queue<Token> Lex(const std::string& filename);

private:
    static const std::vector<Token> m_acceptedTokens;
};
}
