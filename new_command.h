#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_NEW_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_NEW_H

#include "iCommand.h"

class NewCommand :public ICommand
{
public:
    ~ NewCommand();
    void run(int argc, char** argv, DataController & m_DataController);
};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_NEW_H
