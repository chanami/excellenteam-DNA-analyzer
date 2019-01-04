#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_INTERPTER_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_INTERPTER_H

#include "cli.h"
#include "new_command.h"
#include "print.h"
#include "save.h"
#include "data_controller.h"
#include "iCommand.h"
#include <iostream>
#include <map>

typedef void (*CommandFunction)(int argc, char **argv) ; // function pointer type

class CommandInterpreter
{
public:

    CommandInterpreter();
    ~CommandInterpreter();

    void run();
    void executeCommand();

private:

    Cli  m_cli;
    static std::map<char * , CommandFunction > commandsMap;
    s_args * m_args;
    DataController m_dataController;

};
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_INTERPTER_H
