#pragma once
#include "expnode.h"

#include <vector>
#include <memory>

#include "astnode.h"

namespace hp_compiler
{
class ExpNode : public ASTNode
{
public:
    typedef std::shared_ptr<ExpNode> ExpNodePtr;

    ExpNode(unsigned int value);

    unsigned int GetValue() const;

    virtual std::vector<std::shared_ptr<ASTNode>> Children();
private:
    unsigned int m_value;
};
}