#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DUP_DNA_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DUP_DNA_H

#include "iDna.h"
#include "shared_ptr.h"



class DupDna :public IDna
{
public:
    DupDna(SharedPtr<IDna>, std::string);
    ~DupDna();

    unsigned long getDNALength() const;
    Nucleotide operator[](int index) const;

    inline void setName(std::string);
    inline void setId();

    inline std:: string getName() const ;
    inline int getId()const ;

private:
    SharedPtr <IDna> m_dna;
    void setDefaultName();

};
void DupDna::setName(std::string name)
{
    m_dnaName = name;
}
void DupDna::setId()
{
    m_dnaId = ++m_dnasCounter;
}
std::string DupDna::getName() const
{
    return m_dnaName;
}
int DupDna::getId() const
{
    return m_dnaId;
}

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DUP_DNA_H
