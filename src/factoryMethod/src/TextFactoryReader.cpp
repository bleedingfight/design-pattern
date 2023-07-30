//
// Created by liushuai on 2020/12/6.
//

#include "TextFactoryReader.h"
TextFactoryReader::~TextFactoryReader() {
    std::cout<<"Destroy TextFactoryReader\n";
}
IReader * TextFactoryReader::NewReader() {
    return new TextReader();
}