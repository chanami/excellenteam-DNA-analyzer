#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_CLI_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_CLI_H

#include <map>
#include "parser.h"

typedef void (*CommandFunction)(int argc, char *argv[]) ; // function pointer type
typedef std::map< char*, CommandFunction> command_map;

class Cli
{
public:
    ~Cli();
    Cli * getInstance();
    void run();
    inline void readLine();
    inline bool parseCommand();
    inline void callCommand();

private:
    static commandMap m_command_map

    char * m_line;
    int * m_argc;
    char ** m_argv;
    Parser m_parser;

    Cli();
    Cli(const Cli &);
    void operator = (const Cli &);




};

#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_CLI_H
