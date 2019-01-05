#include "load.h"
LoadCommand:: ~LoadCommand()
{
    std::cout << "im in load dtor" << std::endl;

}

void createSeqWithDiffName(const char * seq, DataController & m_DataController)
{
    IDnaPtr newDna(new DNASequence(seq, ""));
    m_DataController.addDna(newDna, newDna->getName(),newDna->getId());
    std::cout << "def name" << std::endl;
}
void createSeq(const char* seq, char* keyName, DataController & m_DataController) {
    IDnaPtr newDna(new DNASequence(seq, keyName));
    m_DataController.addDna(newDna, newDna->getName(), newDna->getId());
    std::cout << "name is ---- " << keyName << std::endl;
}

void LoadCommand::run(int argc, char** argv, DataController & m_DataController)
{
    if (!m_dnaReader.fileIsExist(argv[1]))
        std::cout << "The file does not exist" << std::endl;
    else
    {
        std::string seqFromFile = m_dnaReader.readSeqFromFile(argv[1]);
        if ( argc == 3 )
        {
            char * keyName = argv[2];

            if (m_DataController.checkIfNameExist( keyName ) )
            {

                createSeq(seqFromFile.c_str(), keyName, m_DataController);
            }

            else
                createSeqWithDiffName( seqFromFile.c_str(), m_DataController );
        }

        else if ( argc == 2 )

            createSeqWithDiffName( seqFromFile.c_str(), m_DataController );

        else

            std::cout << "Wrong number of argument" << std::endl;
    }

}