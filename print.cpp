#include "print.h"

void printSeq(IDnaPtr dna)
{
    size_t size = dna->getDNALength();
    std::cout << "[" << dna->getId() << "] " << dna->getName() << ": ";
    for(size_t i = 0; i<size; ++i)
    {
        std::cout << (*dna)[i];
    }
    std::cout << std::endl;
}

PrintCommand::~PrintCommand()
{
    std::cout<<"PRINT command dtor\n";
}

void PrintCommand::run(int argc, char **argv, DataController &m_DataController)
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
                printSeq(idna);
            }
            else
            {
                int dnaId;
                dnaId = static_cast<size_t>(atoi(++tmp));
                IDnaPtr idna = m_DataController.loadDnaById(dnaId);
                printSeq(idna);

            }
        }
    }

}