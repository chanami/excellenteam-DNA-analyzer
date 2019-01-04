#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_LOAD_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_LOAD_H

#include "dna_reader.h"
#include "iDna.h"
#include "icommand.h"

class LoadCommand : public Icommand
{
public:

    ~LoadCommand();
    void run(int argc, char ** argv, memoryCtrl &);

private:

    dneReader m_dnaReader;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_LOAD_H
