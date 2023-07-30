//
// Created by liushuai on 2020/12/6.
//

#ifndef FACTORYMETHOD_FILEPROCESS_H
#define FACTORYMETHOD_FILEPROCESS_H
#include "IReaderFactory.h"

class FileProcess {
private:
    IReaderFactory* factory;
public:
    FileProcess(IReaderFactory* f);
    void run();

};


#endif //FACTORYMETHOD_FILEPROCESS_H
