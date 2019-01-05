#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_HOLDER_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_HOLDER_H

#include <iostream>
#include <map>
#include "iDna.h"
#include <vector>
#include "shared_ptr.h"
#include <string>

typedef SharedPtr<IDna> IDnaPtr;

class DataHolder
{
public:
    DataHolder(){};
    //~DataHolder(){};

    void addDna(int idIdentifier, std::string nameIdentifier,IDnaPtr dna);

    inline void addDnaById(IDnaPtr dna ,int idIdentifier);
    inline void addDnaByName(IDnaPtr dna ,std::string nameIdentifier);

    inline IDnaPtr loadDnaById(int identifier);
    inline IDnaPtr loadDnaByName(std::string identifier);

    inline bool checkIfNameExist(char *);

    inline bool deleteDna(std::string identifier);

    void showList();


private:
    std::map<int, IDnaPtr > mapDnaById;
    std::map<std::string, IDnaPtr > mapDnaByName;
};
void DataHolder::addDnaById(IDnaPtr dnaSeq ,int idIdentifier)
{
    mapDnaById.insert( std::pair<int, IDnaPtr>(idIdentifier, dnaSeq) );
}

void DataHolder::addDnaByName(IDnaPtr dnaSeq ,std::string nameIdentifier)
{
    mapDnaByName.insert(std::pair<std::string, IDnaPtr>(nameIdentifier, dnaSeq));
}
IDnaPtr DataHolder::loadDnaById(int identifier)
{
    IDnaPtr itr = mapDnaById.find(identifier)->second;

    return itr;
}
IDnaPtr DataHolder::loadDnaByName(std::string nameIdentifier)
{
//    std::cout<<"name is ---in load by name ---"<<nameIdentifier<<"\n";

//    std::cout<<"\n---MY MAP---\n";
//
//    for (std::map<std::string,IDnaPtr>::iterator it=mapDnaByName.begin(); it!=mapDnaByName.end(); ++it)
//        std::cout << it->first << " => " << it->second << '\n';
    IDnaPtr itr = mapDnaByName.find(nameIdentifier)->second;

    return itr;
}
bool DataHolder::checkIfNameExist(char * key)
{
    return mapDnaByName.find(key) == mapDnaByName.end();
}

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_HOLDER_H
