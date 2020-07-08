//
// Created by Daniel Huang on 2020-07-06.
//

#ifndef ACCELERATECPP_XTEST5_H
#define ACCELERATECPP_XTEST5_H
#include <iostream>
#include <vector>
#include "split.h"
using namespace std;

void test5() {
    string s;

    while(getline(cin, s)) {
        vector<string> v = split(s);
        for (vector<string>::size_type i = 0; i != s.size(); i++) {
            cout << v[i] << endl;
        }
    }
}
#endif //ACCELERATECPP_XTEST5_H
