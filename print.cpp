#include "print.h"

PrintCommand::~PrintCommand()
{
    std::cout<<"PRINT command dtor\n";
}

void PrintCommand::run(int argc, char **argv, DataController &m_DataController)
{
    //m_dataController.addDna(newDna,argv[2],1);
    char * dnaName;
    int dnaId;

    else if( argc == 2)
    {
        if((argv[1][0] != "@") || (argv[1][0] != "#") && ())
        {
            if(argv[1][0] == "@")
            {
                dnaName = argv[1];
                dnaId = static_cast<size_t>(atoi(argv[2]));
            }
            else
            {
                dnaName = argv[2];
                dnaId = static_cast<size_t>(atoi(argv[1]));
            }
            m_DataController.loadDna(dnaName,dnaId);
        }
        else
        {
            std::cout<<"Id must start with # , Name must start with @  \n";
        }
    }
    std::cout<<"argc  "<<argc<<"\n";
    if(argv[1])
        std::cout<<"Print arg[1]"<<argv[1]<<"\n";
    if(argv[2])
        std::cout<<"Print arg[2]"<<argv[2]<<"\n";

    
    std::cout<<"Print command RUN\n";
}