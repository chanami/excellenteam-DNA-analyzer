#include "data_holder.h"

void DataHolder::addDna(int idIdentifier, std::string nameIdentifier, IDnaPtr dnaP)
{
    addDnaById(dnaP, idIdentifier);
    addDnaByName(dnaP,nameIdentifier);
}
void DataHolder::showList()
{
    seqByName = seqDnaByName.begin();
    if(seqByName == seqDnaByName.end())
    {
        std::cout << "The list is empty" << std::endl;
    }
    for ( ; seqByName != seqDnaByName.end(); ++seqByName)
        printOneSeq(seqByName->second);
}
