
#include "parser.h"
#include <string.h>
#include <iostream>

void Parser::parseString(char *line, int *argc, char **argv)
{
    const char delim[]={'\t','\n',' '};
    int i;
    i= 0;

    argv[i] = strtok(line, " ");

    while(argv[i] != NULL)
    {
        argv[++i]= strtok(NULL, delim);
    }
    if(line[strlen(line - 1)] == '\n')
        line[strlen(line - 1)] = '\0';

    *argc = i;

}