#include "commands_interpreter.h"

CommandInterpreter::CommandInterpreter()
{
    m_cli =new Cli(&executeCommand);
}

void CommandInterpreter::run()
{
    m_cli->run();
}

void CommandInterpreter::executeCommand(int argc, char **argv)
{
    ICommand* newCom = new NewCommand();
    newCom->run(argc,argv);
}

CommandInterpreter::~CommandInterpreter()
{
    //free/delete cli ???
}