#ifndef REGISTER_H
#define REGISTER_H
#include "DebugSystem.h"

class Register
{
    public:
        Register();
        virtual ~Register();

    protected:
        DebugSystem debug;

    private:
};

#endif // REGISTER_H
