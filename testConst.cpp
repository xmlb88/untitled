//
// Created by 文伟 on 2021/1/27.
//
#include <iostream>
#include "file_1.h"
using namespace std;

int main() {
    cout << bufSize << endl;

//    const int ci = 1024;
//    const int &r1 = ci;
//    r1 = 42; // 错误：r1是对常量的引用
//    int &r2 = ci; // 错误：试图让一个非常量引用指向一个常量对象
//    cout << r1 << endl;


    // 对常量的引用
    const int ci = 1024;
    const int &r1 = ci; // 正确：引用及其对应的对象都是常量
    cout << r1 << endl;
//    r1 = 42; // 错误：r1是对常量的引用
//    int &r2 = ci; // 错误：试图让一个非常量引用指向一个常量对象
//    
    
    // 引用的类型必须与其所引用对象的类型一致
    // 例外1：在初始化常量引用时，允许用任意表达式作为初始值
    // 只要该表达式的结果能转化成引用的类型即可
    int i = 42;
    const int &l1 = i;
    const int &l2 = 42;
    const int &l3 = l1 * 2;
    cout << i << " " << l1 << " " << l2 << " "
        << l3 << " " << endl;
//    int &l4 = r1 * 2; // 错误：r4是一个普通的引用
    
    double dval = 3.14;
    const int &ri = dval;
    cout << ri << endl;

    // 对const的引用可能引用一个并非const的对象
    int j = 42;
    int &rj = i;
    const int &rj2 = i;
    cout << rj << " " << rj2 << endl;
    rj = 52;
    cout << rj << " " << rj2 << endl;


}
