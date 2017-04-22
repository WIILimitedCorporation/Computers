#include "CommandHandler.h"
#include <string>

CommandHandler::CommandHandler()
{
    //ctor
}

CommandHandler::~CommandHandler()
{
    //dtor
}

string CommandHandler::Query(string command)
{
    string answer = "success";

    if(command == "execute")
        answer = "Was executed";

    return answer;
}
