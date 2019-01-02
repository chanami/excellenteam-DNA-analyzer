#include "cli.h"
#include <iostream>

void Cli::run(s_args * args)
{
    std::cout<<"DNA-CLI>>>> ";
    readLine();
    parseCommand();

    args->s_argc = m_argc;
    args->s_argv = m_argv;
}
Cli::~Cli()
{
    //destructor
}
