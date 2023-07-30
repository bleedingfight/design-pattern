//
// Created by liushuai on 2020/12/5.
//

#include "Library.h"
void Library::step1() {
    std::cout<<"Execute step 1!"<<"\n";
}
void Library::step3() {
    std::cout<<"Execute step 3!"<<"\n";
}
void Library::step5() {
    std::cout<<"Execute step 5!"<<"\n";
}
void Library::run() {
    step1();
    step2();
    step3();
    step4();
    step5();
}
Library::~Library() {
    std::cout<<"Destroy lib!"<<"\n";
}
