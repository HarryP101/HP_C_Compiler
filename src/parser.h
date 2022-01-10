#pragma once
#include <memory>
#include <vector>
#include "astnode.h"

namespace hp_compiler
{
class Parser
{
public:
    static void GetRoot(const std::vector<std::string>& tokens);
};
}