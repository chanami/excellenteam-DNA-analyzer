#ifndef EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DNA_READER_H
#define EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DNA_READER_H

#include <iostream>
#include <fstream>

class DneReader
{
public:

    std::string readSeqFromFile(std::string fileName);
    bool fileIsExist(const char * fileName);

};


#endif //EXCELLENTEAM_ELLA_C_DNA_CHANAMI_DNA_READER_H
