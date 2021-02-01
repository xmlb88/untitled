//
// Created by 文伟 on 2021/2/2.
//

#include <iostream>
#include <vector>
using namespace std;

void printVec(const vector<int>&);

int main() {
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printVec(v);
    for (auto& r : v) {
        r *= 2;
    }
    printVec(v);

    for (auto beg = v.begin(), end = v.end(); beg != end; ++beg) {
        auto &r = *beg;
        r *= 2;
    }
    printVec(v);
}

void printVec(const vector<int>& v) {
    for (auto num : v) {
        cout << num << " ";
    }
    cout << endl;
}