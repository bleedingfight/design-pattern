//
// Created by liushuai on 2020/12/6.
//

#include "FileProcess.h"
FileProcess::FileProcess(IReaderFactory *f) {
    this->factory = f;
}
void FileProcess::run() {
    IReader* reader = this->factory->NewReader();
    reader->read();
}