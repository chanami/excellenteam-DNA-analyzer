#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H

#include "nucleotide.h"
#include <iostream>
#include <string>

class IDna
{
public:

    virtual ~IDna(){};

    virtual long getDNALength() const = 0;
    virtual Nucleotide operator[](int)const = 0;

    inline std:: string getName();
    inline int getId();

protected:

    static size_t m_dnasCounter;
    std::string m_dnaName;
    int m_dnaId;

};
std::string IDna::getName()
{
    return m_dnaName;
}
int IDna::getId()
{
    return m_dnaId;
}
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H
