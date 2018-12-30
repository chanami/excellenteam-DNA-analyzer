
#include "parser.h"
#include <string.h>

void Parser::parseString(char *line, int *argc, char **argv)
{
    const char delimiters[]={'\t','\n',' '};
    int i;
    i= 0;

    argv[i] = strtok(line, " ");

    while(argv[i] != NULL)
    {
        argv[++i]= strtok(NULL, delimiters);
    }
    if(line[strlen(line - 1)] == '\n')
        line[strlen(line - 1)] = '\0';
}