#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H

#include "nucleotide.h"
#include <iostream>

class IDna
{
public:


    virtual ~IDna(){};

    virtual long getDNALength() const = 0;
    virtual Nucleotide operator[](int)const = 0;


protected:
    static size_t m_dnasCounter;
    char * m_dnaName;
    int m_dnaId;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H
