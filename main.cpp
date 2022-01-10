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
    std::vector<hp_compiler::Lexer::Token> tokens = hp_compiler::Lexer::Lex(fileToCompile);

    for (const auto v : tokens)
    {
        std::cout << v << " ";
    }

    hp_compiler::Parser::GetRoot(tokens);
    std::cout << "\n";
}