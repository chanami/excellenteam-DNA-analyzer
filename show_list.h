#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_SHOW_LIST_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_SHOW_LIST_H

#include "iCommand.h"
class ShowListCommand :public ICommand
{
public:
    ~ ShowListCommand();
    void run(int argc, char** argv, DataController & m_DataController);
};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_SHOW_LIST_H
