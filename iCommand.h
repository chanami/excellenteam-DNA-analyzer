#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_ICOMMAND_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_ICOMMAND_H

class ICommand
{
public:
    ICommand();
    virtual ~ICommand();

    virtual run();
};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_ICOMMAND_H
