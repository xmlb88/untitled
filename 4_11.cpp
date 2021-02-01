//
// Created by 文伟 on 2021/2/1.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
//    int i = 2;
//    double d = 2.4;
//    i *= static_cast<int>(d);
//    cout << i << endl;
    cout << "================" << endl;

    int i; double d; const string *ps; char *pc; void *pv;
    pv = static_cast<void*>(const_cast<string*>(ps));
    i = static_cast<int>(*pc);
    pv = static_cast<void*>(&d);
    pc = static_cast<char*>(pv);
}