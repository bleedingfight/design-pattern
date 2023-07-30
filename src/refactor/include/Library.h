//
// Created by liushuai on 2020/12/5.
//

#ifndef TRADITION_METHOD_LIBRARY_H
#define TRADITION_METHOD_LIBRARY_H
#include <iostream>

class Library {
protected:
    void step1();
    virtual void step2()=0;
    void step3();
    virtual void step4()=0;
    void step5();

public:
    virtual ~Library();
    void run();
};


#endif //TRADITION_METHOD_APPLICATION_H
