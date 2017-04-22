#include <iostream>
#include "Register.h"

using namespace std;

/*

    Первый слой абстракции

*/

string   command;
Register ServerRegister;

int main()
{
    cout << "Welcome to Computers!" << endl;
    cout << "Waiting for a command" << endl;

    cin  >> command;
    while (command != "exit")
    {
        cin >> command;
    }
    return 0;
}
