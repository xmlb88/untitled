//
// Created by 文伟 on 2021/1/27.
//

#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14;
//    double *ptr = &pi; // 错误：ptr是一个普通指针
    const double *cptr = &pi;
    cout << *cptr << endl;
//    *cptr = 42; // 错误：不能给*cptr赋值
    // 指针的类型必须与其所指对象的类型一致
    // 例外1：允许令一个指向常量的指针指向一个非常量的对象
    double dval = 3.14159;
    cptr = &dval;
    cout << *cptr << endl;

    // const 指针
    // 常量指针
    int errNumb = 0, err = 124;
    int *const curErr = &errNumb;
    cout << *curErr << endl;
//    cutErr = &err;
    *curErr = 1024; // 可以通过指针改变所指对象的值，但指针本身的值（地址）不能再改变
    cout << errNumb << endl;

    const double pir = 3.14159;
    const double *const pip = &pir;
    // pip是一个指向常量对象的常量指针

}