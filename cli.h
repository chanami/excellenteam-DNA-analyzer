#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_CLI_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_CLI_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "parser.h"


typedef struct
{
  int  s_argc;
  char ** s_argv;
}s_args;

class Cli
{
public:

    void run(s_args *);
    ~Cli();

private:

    char  m_line[1024];
    int  m_argc;
    char * m_argv[20];
    Parser m_parser;


    inline void readLine();
    inline bool parseCommand();
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

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_CLI_H
