#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DUP_COMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DUP_COMMAND_H


#include "iCommand.h"
#include "dup_dna.h"
#include <cstdlib>
#include <cstring>

class DupCommand:public ICommand
{
public:

    ~DupCommand();
    void run(int argc, char** argv, DataController & m_DataController);
};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DUP_COMMAND_H
