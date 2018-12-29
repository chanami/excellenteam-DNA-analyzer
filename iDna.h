#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H

class IDna
{
public:
    virtual IDna() = 0;
    virtual ~IDna() = 0;

    virtual size_t getDnaLength() = 0;

    Neclutide operator[](Dna &);
private:
};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H
