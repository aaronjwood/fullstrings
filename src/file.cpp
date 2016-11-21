#include "file.hpp"

File &File::open(const std::string &file) {
    char buffer[1024 * 256];

    std::ifstream *handle = new std::ifstream;
    handle->rdbuf()->pubsetbuf(buffer, sizeof buffer);

    handle->open(file, std::ios::ate | std::ios::binary);
    this->handle = handle;

    this->getSize();

    return *this;
}

File &File::getSize() {
    this->size = this->handle->tellg();
    this->handle->seekg(0, this->handle->beg);

    return *this;
}

File::~File() {
    delete this->handle;
}
