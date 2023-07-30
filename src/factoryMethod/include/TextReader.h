//
// Created by liushuai on 2020/12/6.
//

#ifndef FACTORYMETHOD_TEXTREADER_H
#define FACTORYMETHOD_TEXTREADER_H
#include "IReader.h"
#include <iostream>

class TextReader: public IReader{
    virtual void read();
    virtual ~TextReader();
};


#endif //FACTORYMETHOD_TEXTREADER_H
