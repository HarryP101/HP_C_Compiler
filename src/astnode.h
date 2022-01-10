#pragma once
#include <vector>
#include <memory>

namespace hp_compiler
{
class ASTNode
{
public:
    typedef std::shared_ptr<ASTNode> ASTNodePtr;
    virtual std::vector<ASTNodePtr> Children() = 0;
protected:
    std::vector<ASTNodePtr> m_children;
};
}
