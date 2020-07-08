//
// Created by Daniel Huang on 2020-07-08.
//

#ifndef ACCELERATECPP_XTEST6_H
#define ACCELERATECPP_XTEST6_H
#include "split.h"

void test06() {
    string s = "http://www.cplusplus.com/reference/algorithm/find_if/";
    //vector<string> vec = split(abc);

    /* if (is_pal(s)) {
        cout << "palindrome" << endl;
    } else {
        cout << "not a palindrome" << endl;
    }
    */

    vector<string> site = find_urls(s);
}

#endif //ACCELERATECPP_XTEST6_H
