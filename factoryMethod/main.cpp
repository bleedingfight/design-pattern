#include <iostream>
#include "IReaderFactory.h"
#include "FileProcess.h"
#include "TextFactoryReader.h"
#include "ImageFactoryReader.h"
int main() {
    IReaderFactory* factory;
    TextFactoryReader* t_factory = new TextFactoryReader();
    ImageFactoryReader* i_factory = new ImageFactoryReader();
    factory = t_factory;
    FileProcess *fp = new FileProcess(factory);
    fp->run();
    fp = new FileProcess(i_factory);
    fp->run();
    delete t_factory;
    delete fp;
    return 0;
}
