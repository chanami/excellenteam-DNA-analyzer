#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DNA_WRITER_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DNA_WRITER_H

#include "iDna.h"
#include <string>
#include <iostream>
#include <fstream>
#include "shared_ptr.h"

typedef SharedPtr<IDna> IDnaPtr;


class DnaWriter
{
public:

    DnaWriter(std::string file_name, IDnaPtr dna);
    void write();

private:
   IDnaPtr m_dna;
   std::ofstream m_write;
   std::string m_filename;

};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DNA_WRITER_H
