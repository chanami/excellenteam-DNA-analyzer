
#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_CONTROLLER_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_CONTROLLER_H

#include "data_holder.h"
#include <iostream>

class DataController
{
public:
    //DataController(){};
    //~DataController();

    void addDna(IDnaPtr idnaP ,std::string nameIdentifier,int idIdentifier);

    IDnaPtr loadDnaById(int idIdentifier);
    IDnaPtr loadDnaByName(std::string nameIdentifier);

    inline bool checkIfNameExist(char* key);
    bool deleteDna(std::string nameIdentifier,int idIdentifier);
    void showList();


private:
    DataHolder m_dataHolder;

};
bool DataController::checkIfNameExist(char* key)
{
    return m_dataHolder.checkIfNameExist(key);
}
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_CONTROLLER_H
