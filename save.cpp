#include "save.h"
SaveCommand::~SaveCommand()
{
    std::cout<<"SaveCommand command dtor\n";
}

void SaveCommand::run(int argc, char **argv, DataController &m_DataController)
{
    if(argc < 2)
        std::cout<<"In order to Save we need an identifier: Id/Name  \n";

    else
    {

        if((argv[1][0] != '@') && (argv[1][0] != '#'))
            std::cout<<"Id must start with # , Name must start with @  \n";

        else
        {
            std::cout<<"save function\n";

            char * tmp = argv[1];
            IDnaPtr idna;
            std::string fileName;

            if(argv[1][0] == '@')
                idna = m_DataController.loadDnaByName(++tmp);

            else
            {
                int dnaId;
                dnaId = static_cast<size_t>(atoi(++tmp));
                idna = m_DataController.loadDnaById(dnaId);
            }
            if(argc == 3)
                fileName = argv[2];
            else
                fileName = idna->getName() + ".rawdna";
            std::cout<<"file name"<<fileName<<"\n";

            DnaWriter dnaWriter(fileName,idna);
            dnaWriter.write();
        }
    }

}