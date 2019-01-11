#include "dup_command.h"

DupCommand::~DupCommand()
{
    std::cout<< "pair command ctor";
}
IDnaPtr getDnaseq(int argc, char **argv, DataController &m_DataController)
{
    if(argc != 2)
        std::cout<<"In order to get a Dna sequence  we need one identifier: Id/Name  \n";

    else
    {
        if((argv[1][0] != '@') && (argv[1][0] != '#'))
            std::cout<<"Id must start with # , Name must start with @  \n";

        else
        {
            char * tmp = argv[1];
            if(argv[1][0] == '@')
            {
                IDnaPtr idna = m_DataController.loadDnaByName(++tmp);
                return idna;
            }
            else
            {
                int dnaId;
                dnaId = static_cast<size_t>(atoi(++tmp));
                IDnaPtr idna = m_DataController.loadDnaById(dnaId);
                return idna;

            }
        }
    }
    return IDnaPtr();
}
void DupCommand::run(int argc, char **argv, DataController &m_DataController)
{

//    std::cout << "im in up command run" << std::endl;

    IDnaPtr dnaPtr = getDnaseq(argc,argv,m_DataController);

    //std::string dnaName =getDnaByIdentifier(argc,argv,m_DataController)
   // std::string dnaName = dnaPtr->getName + "_dup";

    IDnaPtr dupSeq(new DupDna(dnaPtr,""));

    m_DataController.addDna(dupSeq,dupSeq->getName(),dupSeq->getId());
}
