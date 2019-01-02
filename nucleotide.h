#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_NUCLEOTIDE_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_NUCLEOTIDE_H


class Nucleotide
{
public:
    explicit Nucleotide(char c ='A');
    bool operator == (char);
    Nucleotide* operator = (char);
    Nucleotide* operator = (Nucleotide);
    operator char()
    {
        return m_singleNucleotide;
    };

private:
    void check_if_valid(char c_to_check);

    char m_singleNucleotide;
};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_NUCLEOTIDE_H
