#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_PRINT_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_PRINT_H

#include "iCommand.h"
#include <cstdlib>
#include <cstring>



class PrintCommand :public ICommand
{
public:
    ~ PrintCommand();
    void run(int argc, char** argv, DataController & m_DataController);

};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_PRINT_H
