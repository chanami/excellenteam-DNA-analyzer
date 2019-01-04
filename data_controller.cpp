
#include "data_controller.h"
void DataController::addDna(IDnaPtr dnaP, std::string nameIdentifier, int idIdentifier)
{
    m_dataHolder.addDna(idIdentifier,nameIdentifier,dnaP);
}
IDnaPtr DataController::loadDnaById(int idIdentifier)
{
    IDnaPtr temp = m_dataHolder.loadDnaById(idIdentifier);
    return temp;
}
IDnaPtr DataController::loadDnaByName(std::string nameIdentifier)
{
    //std::cout<<"name is ----DCTRL---"<<nameIdentifier<<"\n";

    IDnaPtr temp = m_dataHolder.loadDnaByName(nameIdentifier);
    return temp;
}