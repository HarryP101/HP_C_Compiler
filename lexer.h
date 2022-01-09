#include <vector>
#include <string>

namespace hp_compiler
{
class Lexer
{
public:
    typedef std::string Token;
    static std::vector<Token> Lex(const std::string& filename);
};
}
