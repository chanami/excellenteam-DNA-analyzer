#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_HOLDER_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_HOLDER_H

#include "iDna.h"
#include <vector>
#include "shared_ptr.h"
#include <map>

typedef SharedPtr<IDna> IDnaPtr;

typedef struct
{
    int id;
    char* name
} IDnaIndexer;

class DataHolder
{
public:
    DataHolder();
    ~DataHolder();

    bool addDna(IDnaPtr dna ,char * identifier);
    IDnaPtr loadDna(char * identifier);
    bool deleteDna(IDnaPtr dna ,char * identifier);

private:
    static std::unorderd_map<IDnaIndexer, IDnaPtr > mapDnaByName;

    inline bool addDnaById(IDnaPtr dna ,char * identifier);
    inline bool addDnaByName(IDnaPtr dna ,char * identifier);

    inline IDnaPtr loadDnaById(char * identifier);
    inline IDnaPtr loadDnaByName(char * identifier);

    inline bool deleteDnaById(IDnaPtr dna ,char * identifier);
    inline bool deleteDnaByName(IDnaPtr dna ,char * identifier);
};

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DATA_HOLDER_H
