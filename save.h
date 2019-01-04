#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_SAVE_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_SAVE_H

#include "iCommand.h"
#include "dna_writer.h"
#include <cstdlib>
#include <cstring>


class SaveCommand : public ICommand
{
public:
    ~ SaveCommand();
    void run(int argc, char** argv, DataController & m_DataController);

};

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_SAVE_H
