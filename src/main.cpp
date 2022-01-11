#include <iostream>
#include <vector>

#include "lexer.h"
#include "parser.h"

int main(int argc, char *argv[]) {

    if (argc < 2)
    {
        std::cerr << "Not enough input arguments supplied" << std::endl;
        return 0;
    }

    std::string fileToCompile = argv[1];
    std::queue<hp_compiler::Lexer::Token> tokens = hp_compiler::Lexer::Lex(fileToCompile);

    while (!tokens.empty())
    {
        std::cout << tokens.front() << std::endl;
        tokens.pop();
    }


    hp_compiler::Parser::GetRoot(tokens);
    std::cout << "\n";
}