#pragma once

#include <memory>
#include <queue>
#include <string>

#include "astnode.h"

namespace hp_compiler
{
class Parser
{
public:
    static void GetRoot(std::queue<std::string>& tokens);

private:
    static ASTNode::ASTNodePtr ParseExp(std::queue<std::string>& tokens);
};
}