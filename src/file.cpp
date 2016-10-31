#include "file.hpp"

File &File::open(const std::string &file) {
    char buffer[4096];

    std::ifstream *handle = new std::ifstream;
    handle->rdbuf()->pubsetbuf(buffer, sizeof buffer);

    handle->open(file, std::ios::ate | std::ios::binary);
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
