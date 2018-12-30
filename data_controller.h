
#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_CONTROLLER_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_CONTROLLER_H


#include "data_holder .h"

class DataController
{
public:
    DataController();
    ~DataController();

    bool addDna(char * dna ,char * identifier);
    IDnaPtr loadDna(char * identifier);
    bool deleteDna(IDnaPtr dna ,char * identifier);

private:
    DataHolder m_dataHolder;
};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_CONTROLLER_H
