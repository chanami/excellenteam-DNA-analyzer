#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_PAIR_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_PAIR_H

#include "iCommand.h"
class PairCommand :public ICommand
{
public:
    ~ PairCommand();
    void run(int argc, char** argv, DataController & m_DataController);
};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_PAIR_H
