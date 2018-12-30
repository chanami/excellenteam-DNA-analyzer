#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_HOLDER_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_HOLDER_H

#include <iostream>
#include <map>
#include "iDna.h"
#include <vector>
#include "shared_ptr.h"

typedef SharedPtr<IDna> IDnaPtr;

typedef struct
{
    int id;
    char* name;
} IDnaIndexer;

class DataHolder
{
public:
    DataHolder();
    ~DataHolder();

    inline bool addDnaById(IDnaPtr dna ,char * identifier);
    inline bool addDnaByName(IDnaPtr dna ,char * identifier);

    inline IDnaPtr loadDnaById(char * identifier);
    inline IDnaPtr loadDnaByName(char * identifier);

    inline bool deleteDnaById(IDnaPtr dna ,char * identifier);
    inline bool deleteDnaByName(IDnaPtr dna ,char * identifier);


private:
    static std::map<IDnaIndexer, IDnaPtr > mapDnaByName;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_HOLDER_H
