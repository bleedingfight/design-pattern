//
// Created by liushuai on 2020/12/7.
//

#include "FileSplitter.h"

FileSplitter::FileSplitter(std::string &fp, int n, IProgress *ip) : fileSplit(fp), number(n), iProgress(ip) {}

void FileSplitter::split() {
    for (int i = 0; i < number; i++) {
        float progressValue = (i + 1) / number;
        onProgress(progressValue);

    }
}

void FileSplitter::onProgress(float value) {
    if (iProgress != nullptr) {
        std::cout<< "Current split value:" << value << "\n";
    }

}
