#include "dup_dna.h"
#include <sstream>



DupDna::~DupDna()
{
    std::cout<< "DupDna dtor";
}

void DupDna::setDefaultName()
{
    std::stringstream ss;
    ss << m_dnaName <<"_dup_"<<m_dnaId;
    std::string sService = ss.str();

    m_dnaName = sService;

    std::cout << "nameSeq: " << m_dnaName <<std::endl;

}

DupDna::DupDna(SharedPtr<IDna> pairDna, std::string name)
{
    std::cout << "im in dupdna ctor" << std::endl;

    m_dna = pairDna;
    m_dnaId = ++m_dnasCounter;

    if(name.compare(""))
        m_dnaName = name;
    else
        setDefaultName();
}

unsigned long DupDna:: getDNALength() const
{
    return m_dna->getDNALength();
}

Nucleotide DupDna::operator[](int index) const
{
    return m_dna->operator[](index);
}
