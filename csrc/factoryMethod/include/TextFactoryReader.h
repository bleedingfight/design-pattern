//
// Created by liushuai on 2020/12/6.
//

#ifndef FACTORYMETHOD_TEXTFACTORYREADER_H
#define FACTORYMETHOD_TEXTFACTORYREADER_H
#include "IReaderFactory.h"
#include "IReader.h"
#include "TextReader.h"
class TextFactoryReader: public IReaderFactory {
public:
    virtual IReader* NewReader();
    ~TextFactoryReader();
};


#endif //FACTORYMETHOD_TEXTFACTORYREADER_H
