#include "data_holder.h"

void DataHolder::addDna(int idIdentifier, std::string nameIdentifier, IDnaPtr dnaP)
{
    addDnaById(dnaP, idIdentifier);
    addDnaByName(dnaP,nameIdentifier);
}
void printSeq(IDnaPtr dna)
{
    size_t size = dna->getDNALength();
    std::cout << "[" << dna->getId() << "] " << dna->getName() << ": ";
    for(size_t i = 0; i<size; ++i)
    {
        std::cout << (*dna)[i];
    }
    std::cout << std::endl;
}

void DataHolder::showList()
{
//    std::cout << "im in showList data holder" << std::endl;

    std::map<std::string, IDnaPtr>::iterator seqByName = mapDnaByName.begin();
    if(seqByName == mapDnaByName.end())
    {
        std::cout << "The list is empty :(" << std::endl;
    }

    for ( ; seqByName != mapDnaByName.end(); ++seqByName)
        printSeq(seqByName->second);
}
