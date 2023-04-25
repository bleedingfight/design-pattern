//
// Created by liushuai on 2020/12/6.
//

#ifndef FACTORYMETHOD_IMAGEFACTORYREADER_H
#define FACTORYMETHOD_IMAGEFACTORYREADER_H
#include "IReaderFactory.h"
#include "ImageReader.h"
class ImageFactoryReader: public IReaderFactory{
public:
    virtual IReader* NewReader();
    virtual ~ImageFactoryReader();

};


#endif //FACTORYMETHOD_IMAGEFACTORYREADER_H
