#include <vector>
#include <memory>

namespace hp_compiler
{
class ASTNode
{
public:
    virtual std::vector<std::shared_ptr<ASTNode>> Children() = 0;
protected:
    std::vector<std::shared_ptr<ASTNode>> m_children;
};
}
