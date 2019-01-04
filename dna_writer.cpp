#include "dna_writer.h"

DnaWriter::DnaWriter(std::string file_name,IDnaPtr dna):m_dna(dna) {

    m_filename = file_name;

}

void DnaWriter::write() {

    m_write.open(m_filename.c_str());
    size_t size = m_dna->getDNALength();

    for(size_t i = 0; i<size; ++i)
    {
        m_write << (*m_dna)[i];
    }
    m_write.close();
}