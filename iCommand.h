#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_ICOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_ICOMMAND_H


class ICommand
{
public:

    virtual ~ICommand(){};

    virtual void run(int argc, char *argv[20]) = 0;

};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_ICOMMAND_H
