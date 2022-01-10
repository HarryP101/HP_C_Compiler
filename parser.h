#include <memory>
#include <vector>
#include "astnode.h"

namespace hp_compiler
{
    class Parser
    {
    public:
        static std::shared_ptr<ASTNode> GetRoot(const std::vector<std::string>& tokens);
    };
}