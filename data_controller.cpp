
#include "data_controller.h"
void DataController::addDna(IDnaPtr dnaP, char *nameIdentifier, int idIdentifier)
{
    m_dataHolder.addDna(idIdentifier,nameIdentifier,dnaP);
}