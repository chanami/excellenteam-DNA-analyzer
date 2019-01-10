#include "pair.h"

PairCommand::~PairCommand()
{
    std::cout<< "pair command ctor";
}

IDnaPtr getDnaByIdentifier(int argc, char **argv, DataController &m_DataController)
{
    if(argc != 2)
        std::cout<<"In order to Print we need one identifier: Id/Name  \n";

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
}
void PairCommand::run(int argc, char **argv, DataController &m_DataController)
{
    IDnaPtr dnaPtr;
    dnaPtr = getDnaByIdentifier(argc,argv,m_DataController);

     
    //get pair
    //create name for idna (default name ---org_pair1 ...org_pair2)
    //create idna
    //print idna
    pairDna =PairDna();
}
