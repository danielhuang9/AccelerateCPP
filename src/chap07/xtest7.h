//
// Created by Daniel Huang on 2020-07-10.
//

#ifndef ACCELERATECPP_XTEST7_H
#define ACCELERATECPP_XTEST7_H
//
// Created by Daniel Huang on 2020-07-10.
//
#include "common/allHeaders.h"
#include "table.h"

void test07() {
    map<string, vector<int> > ret = xref(cin);

    for (map<string, vector<int> >::const_iterator it = ret.begin();
                                                   it != ret.end();
                                                   ++it) {
        cout << it->first << " occurs on line(s): ";
        vector<int>::const_iterator line_it = it ->second.begin();
        cout << *line_it;
        cout.flush();
        ++line_it;

        while (line_it != it ->second.end()) {
            cout << ", " << *line_it;
            ++line_it;
        }
        cout << endl;
    }
    return;
}

#endif //ACCELERATECPP_XTEST7_H
