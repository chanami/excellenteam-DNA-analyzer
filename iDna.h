#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H

class IDna
{
public:


    virtual ~IDna() = 0;

    virtual int getDnaLength() const = 0;
    virtual char operator[](int)const = 0;

};

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_IDNA_H
