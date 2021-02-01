//
// Created by 文伟 on 2021/2/2.
//

#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        try {
            if (b == 0) throw runtime_error("divide by zero");
            cout << a / b << endl;
        } catch (runtime_error err) {
            cout << err.what() << endl;
        }
    }
}