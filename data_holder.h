#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_HOLDER_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_HOLDER_H

#include <iostream>
#include <map>
#include "iDna.h"
#include <vector>
#include "shared_ptr.h"

typedef SharedPtr<IDna> IDnaPtr;

class DataHolder
{
public:
    DataHolder(){};
    //~DataHolder(){};

    void addDna(int idIdentifier, char* nameIdentifier,IDnaPtr dna);

    inline void addDnaById(IDnaPtr dna ,int idIdentifier);
    inline void addDnaByName(IDnaPtr dna ,char * nameIdentifier);

    inline IDnaPtr loadDnaById(char * identifier);
    inline IDnaPtr loadDnaByName(char * identifier);

    inline bool deleteDna(char * identifier);


private:
    std::map<int, IDnaPtr > mapDnaById;
    std::map<char*, IDnaPtr > mapDnaByName;
};
void DataHolder::addDnaById(IDnaPtr dnaSeq ,int idIdentifier)
{
    mapDnaById.insert( std::pair<int, IDnaPtr>(idIdentifier, dnaSeq) );
}

void DataHolder::addDnaByName(IDnaPtr dnaSeq ,char * nameIdentifier)
{
    mapDnaByName.insert( std::pair<char *, IDnaPtr>(nameIdentifier, dnaSeq) );
}
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_HOLDER_H
