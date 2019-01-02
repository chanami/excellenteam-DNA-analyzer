#include "data_holder.h"

void DataHolder::addDna(int idIdentifier, char *nameIdentifier, IDnaPtr dnaP)
{
    addDnaById(dnaP, idIdentifier);
    addDnaByName(dnaP,nameIdentifier);
}