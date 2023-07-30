//
// Created by liushuai on 2020/12/7.
//

#ifndef OBSERVER_MAINFORM_H
#define OBSERVER_MAINFORM_H
#include <string>
#include "Form.h"
#include "IProgress.h"
#include "FileSplitter.h"
#include "IProgress.h"
#include <iostream>
class MainForm: public Form, public IProgress {
private:
    std::string filePath;
    int splitNum;
public:
    MainForm(std::string filename);
    void doSplit();
    virtual void DoProgress(float  value);
};


#endif //OBSERVER_MAINFORM_H
