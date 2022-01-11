#include "expnode.h"

#include <vector>
#include <memory>

#include "astnode.h"

using namespace hp_compiler;

ExpNode::ExpNode(unsigned int value) : m_value(value) {}

std::vector<std::shared_ptr<ASTNode>> ExpNode::Children()
{
    return m_children;
}

unsigned int ExpNode::GetValue() const
{
    return m_value;
}