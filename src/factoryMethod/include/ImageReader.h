//
// Created by liushuai on 2020/12/6.
//

#ifndef FACTORYMETHOD_IMAGEREADER_H
#define FACTORYMETHOD_IMAGEREADER_H
#include "IReader.h"
#include <iostream>
class ImageReader : public IReader{
public:
    virtual ~ImageReader();
    virtual void read();

};


#endif //FACTORYMETHOD_IMAGEREADER_H
