#include "dna_writer.h"

DNAWriter::DNAWriter(std::string file_name, const IDna &dna):m_dna(dna) {

    m_filename=file_name + ".txt";

}

void DNAWriter::write() {
    m_write.open(m_filename.c_str());

    for(int i =0;i<m_dna.get_sequence_len();++i){
        m_write << m_dna[i];
    }
    m_write.close();
}