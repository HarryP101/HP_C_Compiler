#include "parser.h"

#include <memory>
#include <queue>
#include <string>

#include "astnode.h"
#include "expnode.h"

using namespace hp_compiler;

void Parser::GetRoot(std::queue<std::string>& tokens)
{

}

ExpNode::ExpNodePtr Parser::ParseExp(std::queue<std::string>& tokens)
{
    std::string tok = tokens.front();
    tokens.pop();

    unsigned int expValue = std::stoul(tok);

    auto expNode = std::make_shared<ExpNode>(expValue);

    return expNode;
}
