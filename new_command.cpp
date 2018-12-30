#include "new_command.h"
#include <iostream>

NewCommand::~NewCommand()
{
    std::cout<<"NEW command dtor\n";
}

void NewCommand::run(int argc, char *argv[])
{
    std::cout<<"NEW command running\n";
}

