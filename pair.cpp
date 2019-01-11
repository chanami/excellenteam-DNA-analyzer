#include "pair.h"

PairCommand::~PairCommand()
{
    std::cout<< "pair command ctor";
}

IDnaPtr getDnaByIdentifier(int argc, char **argv, DataController &m_DataController)
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
std::string getNameForPairSeq(int argc, char **argv, DataController &m_DataController)
{
//    if(argc == 3)
//    {
//        if((argv[2][0] != '@') && (argv[2][0] != '@@'))
//        {
//            std::cout<<"Name must start with @, auto name starts with @@  \n";
//            return "error";
//        }
//        else
//        {
//            char * tmp = argv[1];
//            if(argv[2][0] == '@')
//                return ++tmp;
//            else
//            {
//                return "default_name";
//
//            }
//        }
//    }
    return "stop";
}
void PairCommand::run(int argc, char **argv, DataController &m_DataController)
{

//    std::cout << "im in pair command run" << std::endl;

    IDnaPtr dnaPtr = getDnaByIdentifier(argc,argv,m_DataController);

    //std::string dnaName =getDnaByIdentifier(argc,argv,m_DataController)
    std::string dnaName = "new_pair";

    IDnaPtr pairSeq(new PairDna(dnaPtr,dnaName));
//    std::cout << "im in pair id" <<pairSeq->getId() <<std::endl;

    m_DataController.addDna(pairSeq,dnaName,pairSeq->getId());
}
