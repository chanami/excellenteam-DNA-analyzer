#include "new_command.h"
#include <iostream>

NewCommand::~NewCommand()
{
    std::cout<<"NEW command dtor\n";
}

void NewCommand::run(int argc, char** argv,DataController & m_dataController)
{
    IDnaPtr newDna(new DNASequence(argv[1],argv[2]));
    m_dataController.addDna(newDna,argv[2],1);
    std::cout<<"NEW command created name\n";
}

