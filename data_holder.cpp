#include "data_holder.h"

void DataHolder::addDna(int idIdentifier, std::string nameIdentifier, IDnaPtr dnaP)
{
    addDnaById(dnaP, idIdentifier);
    addDnaByName(dnaP,nameIdentifier);
}