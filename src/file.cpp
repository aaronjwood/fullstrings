#include "file.hpp"

File &File::open(const std::string &file) {
    std::ifstream *handle = new std::ifstream(file, std::ios::ate | std::ios::binary);
    File::handle = handle;

    File::getSize();

    return *this;
}

File &File::getSize() {
    File::size = File::handle->tellg();
    File::handle->seekg(0, File::handle->beg);

    return *this;
}

File::~File() {
    delete File::handle;
}
