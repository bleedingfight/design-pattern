//
// Created by liushuai on 2020/12/6.
//

#include "ImageFactoryReader.h"
ImageFactoryReader::~ImageFactoryReader() {
    std::cout<<"Destroy ImageFactory\n";
}

IReader * ImageFactoryReader::NewReader() {
    return new ImageReader();
}