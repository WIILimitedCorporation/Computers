#include "Register.h"
#include "DebugSystem.h"
#include "CommandHandler.h"
#include <iostream>

using namespace std;

Register::Register()
{
    DebugSystem     debug;
    CommandHandler  handler;
    debug.SetEnabled(true);
    debug.Log(handler.Query("execute"));
}

Register::~Register()
{
    //dtor
}
