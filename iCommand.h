#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_ICOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_ICOMMAND_H

#include "shared_ptr.h"
#include "dna.h"
#include "data_controller.h"

typedef SharedPtr<IDna> IDnaPtr;

class ICommand
{
public:

    virtual ~ICommand(){};
    virtual void run(int argc, char** argv, DataController &) = 0;

};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_ICOMMAND_H
