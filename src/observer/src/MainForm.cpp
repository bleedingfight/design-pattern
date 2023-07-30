//
// Created by liushuai on 2020/12/7.
//

#include "MainForm.h"
void MainForm::doSplit() {
    std::string filename = filePath;
    int number = splitNum;
    FileSplitter splitter(filename,number, this);
    splitter.split();
}
void MainForm::DoProgress(float value) {
    std::cout<<"Current split value:"<<value<<"\n";
}
MainForm::MainForm(std::string name):Form(name) {
    windowsName = name;

}