#pragma once

#include <memory>
#include <queue>
#include <string>

#include "expnode.h"

namespace hp_compiler
{
class Parser
{
public:
    static void GetRoot(std::queue<std::string>& tokens);

    static ExpNode::ExpNodePtr ParseExp(std::queue<std::string>& tokens);
};
}