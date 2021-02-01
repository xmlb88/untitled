//
// Created by 文伟 on 2021/2/2.
//

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() {
    Sales_item item1, item2;
//    cin >> item1 >> item2;

//    if (item1.isbn() == item2.isbn()) {
//        cout << item1 + item2 << endl;
//        return 0;
//    } else {
//        cerr << "Data must refer to same ISBN" << endl;
//        return -1;
//    }

    // use throw
//    if (item1.isbn() != item2.isbn()) {
//        throw runtime_error("Data must refer to same ISBN");
//    }
//    cout << item1 + item2 << endl;

    // use try catch
    while (cin >> item1 >> item2) {
        try {
            if (item1.isbn() != item2.isbn()) {
                throw runtime_error("Data must refer same ISBN");
            }
            cout << item1 + item2 << endl;
        } catch (runtime_error err) {
            cout << err.what()
                << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }
}