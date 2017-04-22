#ifndef DEBUGSYSTEM_H
#define DEBUGSYSTEM_H
#include <string>
using namespace std;

class DebugSystem
{
    public:
        DebugSystem();
        virtual ~DebugSystem();
        void SetEnabled(bool state);
        bool GetEnabled();

        void Log(string message);

    protected:
        bool enabled;
    private:
};

#endif // DEBUGSYSTEM_H
