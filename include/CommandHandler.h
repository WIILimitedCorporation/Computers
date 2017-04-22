#ifndef COMMANDHANDLER_H
#define COMMANDHANDLER_H
#include <string>
using namespace std;

class CommandHandler
{
    public:
        CommandHandler();
        virtual ~CommandHandler();
        string Query(string command);
    protected:

    private:
};

#endif // COMMANDHANDLER_H
