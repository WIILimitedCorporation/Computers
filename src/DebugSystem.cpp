#include "DebugSystem.h"
#include <string>
#include <iostream>

using namespace std;

DebugSystem::DebugSystem()
{
    enabled = true;
}

DebugSystem::~DebugSystem()
{
    //dtor
}

bool DebugSystem::GetEnabled()
{
    return this->enabled;
}

void DebugSystem::SetEnabled(bool state)
{
    this->enabled = state;
    DebugSystem::Log("Debug system is activated");
}

void DebugSystem::Log(string message)
{
    if(this->enabled == true)
        cout << "[DEBUG] " << message << endl;
}
