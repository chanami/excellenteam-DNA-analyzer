#include "commands_interpreter.h"
#include <cstring>
#include <iostream>
CommandInterpreter::CommandInterpreter()
{
    m_cli =new Cli(&executeCommand);
}

void CommandInterpreter::run()
{
    m_cli->run();
}

void CommandInterpreter::executeCommand(int argc, char *argv[])
{
    if(strcmp(argv[0],"new") == 0)
    {
        ICommand* newCom = new NewCommand();
        newCom->run();
    }

}

CommandInterpreter::~CommandInterpreter()
{
    //free/delete cli ???
}