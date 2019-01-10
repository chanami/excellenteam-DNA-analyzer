#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DNA_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DNA_H
#include "iDna.h"
#include "nucleotide.h"
#include <stdio.h>
#include <string.h>


class DNASequence : public IDna
{
public:
//    DNASequence(){};
     DNASequence(const char* const, std::string);
    ~DNASequence();

    unsigned long getDNALength() const;
    Nucleotide operator[](int index) const;

    inline void setId();
    inline void setName(std::string);

    inline std::string getName() const;
    inline int getId() const;


private:
    void init_sequence(const char* const);

    Nucleotide* m_seq;
    unsigned long m_seqLength;


};
inline void DNASequence::setId()
{
    m_dnaId = ++m_dnasCounter;
}
inline void DNASequence::setName(std::string dnaName)
{
    if(dnaName != "")
    {
        m_dnaName = dnaName;
    }
    else
    {
        char newName[256];
        char dnaId[256];

        sprintf(dnaId, "%d", m_dnaId);
        strcpy(newName,"seq_");
        strcat(newName,dnaId);

        m_dnaName = newName;
    }

}
inline std::string DNASequence::getName() const
{
    return m_dnaName;
}
inline int DNASequence::getId()const
{
    return m_dnaId;
}

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DNA_H
