//
// Created by 文伟 on 2021/1/31.
//

#include <iostream>
#include "Sales_data.h"
using namespace  std;
 int main () {
    Sales_data data, *p;
    cout << sizeof(Sales_data) << endl;
    cout << sizeof data << endl;
    cout << sizeof p << endl;
    cout << sizeof *p << endl;
    cout << sizeof data.revenue << endl;
    cout << sizeof Sales_data::revenue << endl;
    cout << sizeof (char) << endl;

    cout << "==================" << endl;
    int x[10]; int *q = x;
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(q) / sizeof(*q) << endl;

    cout << "==================" << endl;
    bool test = 1;
    int m = 0, n = 0;
    test ? ++m, ++n : --m, --n;
    cout << m << " " << n << endl;
}