#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H

class IDna
{
public:
    IDna() = 0;
    virtual ~IDna() = 0;

    virtual size_t getDnaLength() const = 0;
    char operator[](Dna &);

private:
//    class Nucleotide
//    {
//    protected:
//        void check_if_valid(char c_to_check) throw();
//
//    public:
//        char c_sequence;
//
//        Nucleotide(char c ='A');
//        bool operator == (char);
//        Nucleotide* operator = (char);
//        Nucleotide* operator = (Nucleotide);
//        operator char()
//        {
//            return c_sequence;
//        };
//        char flip();
//    };

};

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H
