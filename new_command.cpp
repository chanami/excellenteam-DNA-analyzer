#include "new_command.h"
#include <iostream>

NewCommand::~NewCommand()
{
    std::cout<<"NEW command dtor\n";
}

void NewCommand::run(int argc, char** argv,DataController & m_dataController)
{
    IDnaPtr newDna(new DNASequence(argv[1],argv[2]));

    m_dataController.addDna(newDna,newDna->getName(),newDna->getId());
    std::cout<<"NEW command created name\n";
}

