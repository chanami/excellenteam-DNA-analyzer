
#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_CONTROLLER_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_CONTROLLER_H


#include "data_holder.h"

class DataController
{
public:
    //DataController(){};
    //~DataController();

    void addDna(IDnaPtr idnaP ,char * nameIdentifier,int idIdentifier);

    IDnaPtr loadDna(char * nameIdentifier,int idIdentifier);
    bool deleteDna(char * nameIdentifier,int idIdentifier);

private:
    DataHolder m_dataHolder;
};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_CONTROLLER_H
