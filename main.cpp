#include <iostream>
#include <vector>

#include "lexer.h"

int main() {

    std::vector<hp_compiler::Lexer::Token> results = hp_compiler::Lexer::Lex("return_2.c");

    for (const auto v : results)
    {
        std::cout << v << std::endl;
    }
}