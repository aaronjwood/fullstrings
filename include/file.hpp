#ifndef FULLSTRINGS_FILE_HPP
#define FULLSTRINGS_FILE_HPP

#include <fstream>

class File {
private:
    virtual File &getSize();

protected:
    std::ifstream *handle;
    std::ifstream::pos_type size;
    
    virtual File &open(const std::string &file);
};

#endif //FULLSTRINGS_FILE_HPP
