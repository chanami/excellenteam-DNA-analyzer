#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_INTERPTER_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_INTERPTER_H

#include "cli.h"
#include "new_command.h"
#include "iCommand.h"
#include <iostream>
#include <map>

class CommandInterpreter
{
public:

    CommandInterpreter();
    ~CommandInterpreter();

    void run();
    static void executeCommand(int argc, char *argv[]);

private:

    Cli * m_cli;
    static std::map<char * , CommandFunction > commandsMap;

};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_INTERPTER_H
