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

    inline std:: string getName();
    inline int getId();

private:
    SharedPtr <IDna> m_dna;
    void setDefaultName();

};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_PAIR_DNA_H

