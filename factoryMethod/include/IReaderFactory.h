//
// Created by liushuai on 2020/12/6.
//

#ifndef FACTORYMETHOD_IREADERFACTORY_H
#define FACTORYMETHOD_IREADERFACTORY_H
#include "IReader.h"
#include "iostream"
class IReaderFactory {
public:
    virtual IReader* NewReader()=0;
    virtual ~IReaderFactory();

};


#endif //FACTORYMETHOD_IREADERFACTORY_H
