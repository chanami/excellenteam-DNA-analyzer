#include <cstring>
#include <iostream>
#include "dna.h"

size_t DNASequence::IDna::m_dnasCounter = 0;

DNASequence::DNASequence(const char* const dnaSeq, char* dnaName )
{
    m_seq = NULL;

    try
    {
        init_sequence(dnaSeq);

        setId();
        setName(dnaName);
    }
    catch (std::invalid_argument e)
    {
        throw std::invalid_argument("invalid_argument");
    }
    std::cout<<"DNA name- "<<m_dnaName<<" Dna Id "<<m_dnaId << "\n";
}

DNASequence::~DNASequence()
{
    delete[] m_seq;
}

void DNASequence::init_sequence(const char* const dnaSeq)
{
    unsigned long seqLength = strlen(dnaSeq);
    Nucleotide* seq = new Nucleotide[seqLength * sizeof(Nucleotide)];

    try
    {
        if (seqLength % 3 != 0 || seqLength == 0)
            throw std::invalid_argument("invalid length of sequence");

        for (unsigned int i = 0; i < seqLength; ++i)
        {
            seq[i] = Nucleotide(dnaSeq[i]);
        }

        delete[] m_seq;
        m_seq = new Nucleotide[seqLength * sizeof(Nucleotide)];
        m_seq = seq;
        m_seqLength = seqLength;

    }
    catch (std::invalid_argument e) {
        delete[] seq;
        throw e;
    }
}

long DNASequence::getDNALength() const
{
    return m_seqLength;
}

Nucleotide DNASequence::operator[](int index)const
{
    return m_seq[index];
}