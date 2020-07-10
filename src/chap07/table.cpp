//
// Created by Daniel Huang on 2020-07-10.
//
#include "table.h"
#include "chap06/split.h"
#include "common/allHeaders.h"

map<string, vector<int> > xref(istream& in) {
    string line;
    int line_number = 0;
    map<string, vector<int>> ret;

    while (getline(in, line)) {
        ++line_number;
        vector<string> words = split(line);

        for (vector<string>::const_iterator it = words.begin(); it != words.end(); ++it) {
            ret[*it].push_back(line_number);
        }
    }
    return ret;
}