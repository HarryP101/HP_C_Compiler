#pragma once
#include "astnode.h"
#include <vector>
#include <memory>

namespace hp_compiler
{
class ExpNode : public ASTNode
{
public:
    ExpNode(unsigned int value);
    virtual std::vector<std::shared_ptr<ASTNode>> Children();
private:
    m_value;
};
}