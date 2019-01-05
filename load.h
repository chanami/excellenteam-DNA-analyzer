#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_LOAD_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_LOAD_H

#include "dna_reader.h"
#include "iDna.h"
#include "iCommand.h"
#include <iostream>

class LoadCommand : public ICommand
{
public:

    ~LoadCommand();
    void run(int argc, char** argv, DataController & m_DataController);

private:

    DneReader m_dnaReader;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_LOAD_H
