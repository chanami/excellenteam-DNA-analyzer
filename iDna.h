#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H

#include "nucleotide.h"
#include <iostream>
#include <string>
#define DefaultName "seq"

class IDna
{
public:

    virtual ~IDna(){};

    virtual unsigned long getDNALength() const = 0;
    virtual Nucleotide operator[](int)const = 0;

    virtual void setName(std::string) = 0;
    virtual void setId() = 0;

    virtual std:: string getName()const =0;
    virtual int getId() const = 0;

protected:

    static size_t m_dnasCounter;
    std::string m_dnaName;
    int m_dnaId;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H
