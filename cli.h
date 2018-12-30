#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_CLI_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_CLI_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "parser.h"

typedef void (*CommandFunction)(int argc, char *argv[]) ; // function pointer type

class Cli
{
public:

    Cli(CommandFunction);
    void run();

    ~Cli();

private:

    char  m_line[1024];
    int  m_argc;
    char * m_argv[20];
    Parser m_parser;
    CommandFunction  m_comFun;

    inline void readLine();
    inline bool parseCommand();
    inline void callCommand();
};

inline void Cli::readLine()
{
    fgets(m_line, sizeof(m_line), stdin);
}
inline bool Cli::parseCommand()
{
    m_parser.parseString(m_line,&m_argc,m_argv);
    return 1;
}
inline void Cli::callCommand()
{
    m_comFun(m_argc,m_argv);
}
#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_CLI_H
