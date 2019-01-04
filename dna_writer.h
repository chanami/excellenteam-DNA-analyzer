#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DNA_WRITER_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DNA_WRITER_H

#include "IDna.h"
#include <string>

class DNAWriter
{
public:
    DNAWriter(std::string file_name, const IDna &dna);
private:
   IDna m_dna;
   std::string file_name;

};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DNA_WRITER_H
