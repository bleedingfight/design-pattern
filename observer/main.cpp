#include <iostream>
#include "MainForm.h"
using namespace std;
int main() {
    string filename = "windows";
    MainForm main(filename);
    main.doSplit();
    return 0;
}
