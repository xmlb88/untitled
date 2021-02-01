//
// Created by 文伟 on 2021/2/1.
//

#include <iostream>
using namespace std;

int main() {
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while (cin >> ch) {
        switch (ch) {
            case 'a':
                aCnt++;
                break;
            case 'e':
                eCnt++;
                break;
            case 'i':
                iCnt++;
                break;
            case 'o':
                oCnt++;
                break;
            case 'u':
                uCnt++;
                break;
        }
    }

    cout << "Number of a : \t" << aCnt << endl
        << "Number of e : \t" << eCnt << endl
        << "Number of i : \t" << iCnt << endl
        << "Number of o : \t" << oCnt << endl
        << "Number of u : \t" << uCnt << endl;
}