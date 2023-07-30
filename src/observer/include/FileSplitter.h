//
// Created by liushuai on 2020/12/7.
//

#ifndef OBSERVER_FILESPLITTER_H
#define OBSERVER_FILESPLITTER_H
#include "IProgress.h"
#include <string>
#include <iostream>
class FileSplitter {
    std::string fileSplit;
    int number;
    IProgress* iProgress;
public:
    FileSplitter(std::string& fp,int n,IProgress* ip);
    void split();

protected:
    void onProgress(float value);
};


#endif //OBSERVER_FILESPLITTER_H
