//
// Created by liushuai on 2020/12/6.
//

#ifndef FACTORYMETHOD_IREADER_H
#define FACTORYMETHOD_IREADER_H


class IReader {
public:
    virtual void read()=0;
    virtual ~IReader();
};


#endif //FACTORYMETHOD_IREADER_H
