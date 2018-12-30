#include "cli.h"
#include <iostream>

Cli::Cli(CommandFunction cbf)
{
    m_comFun = cbf;
}

void Cli::run()
{
    while (1)
    {
        std::cout<<"cli run\n";
        readLine();
        parseCommand();
        callCommand();
    }
}
