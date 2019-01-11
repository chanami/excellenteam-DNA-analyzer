#include "pair_dna.h"
#include <sstream>



PairDna::~PairDna()
{
    std::cout<< "PairDna dtor";
}

void PairDna::setDefaultName()
{
    std::stringstream ss;
    ss << DefaultName << m_dnaId;
    std::string sService = ss.str();

    m_dnaName = sService;

    std::cout << "nameSeq: " << m_dnaName <<std::endl;

}

PairDna::PairDna(SharedPtr<IDna> pairDna, std::string name)
{
    std::cout << "im in pairdna ctor" << std::endl;

    m_dna = pairDna;
    m_dnaId = ++m_dnasCounter;

    if(name.compare(""))
        m_dnaName = name;
    else
        setDefaultName();
}

unsigned long PairDna:: getDNALength() const
{
    return m_dna->getDNALength();
}

Nucleotide PairDna::operator[](int index) const
{
    return m_dna->operator[](index).flip();
}
