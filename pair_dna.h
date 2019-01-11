#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_PAIR_DNA_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_PAIR_DNA_H

#include "iDna.h"
#include "shared_ptr.h"


class PairDna :public IDna
{
public:
    PairDna(SharedPtr<IDna>, std::string);
    ~PairDna();

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
void PairDna::setName(std::string name)
{
    m_dnaName = name;
}
void PairDna::setId()
{
    m_dnaId = ++m_dnasCounter;
}
std::string PairDna::getName() const
{
    return m_dnaName;
}
int PairDna::getId() const
{
    return m_dnaId;
}
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_PAIR_DNA_H

