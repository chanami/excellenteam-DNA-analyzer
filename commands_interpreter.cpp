#include "commands_interpreter.h"
#include <cstring>
#include <iostream>

CommandInterpreter::CommandInterpreter()
{
    m_args = new s_args();
}

void CommandInterpreter::run()
{
    while(1)
    {
        m_cli.run(m_args);
        executeCommand();
    }
}

void CommandInterpreter::executeCommand()
{

    if(strcmp(m_args->s_argv[0],"new") == 0)
    {
        ICommand* newCom = new NewCommand();
        newCom->run(m_args->s_argc, m_args->s_argv, m_dataController);
    }

    if(strcmp(m_args->s_argv[0],"print") == 0)
    {
        ICommand* printCom = new PrintCommand();
        printCom->run(m_args->s_argc, m_args->s_argv, m_dataController);
    }
    if(strcmp(m_args->s_argv[0],"save") == 0)
    {
        ICommand* saveCom = new SaveCommand();
        saveCom->run(m_args->s_argc, m_args->s_argv, m_dataController);
    }
    if(strcmp(m_args->s_argv[0],"load") == 0)
    {
        ICommand* loadCom = new LoadCommand();
        loadCom->run(m_args->s_argc, m_args->s_argv, m_dataController);
    }
}

CommandInterpreter::~CommandInterpreter()
{
    //free/delete cli ???
}