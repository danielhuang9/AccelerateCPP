//
// Created by Daniel Huang on 2020-07-07.
//
#include "split.h";

vector<string> split(string s) {
    vector<string> ret;
    typedef string::size_type string_size;
    string_size i = 0;

    while (i != s.size()) {
        while (i != s.size() && isspace(s[i])) {
            i++;
        }
        string_size j = i;
        while (j != s.size() && !isspace(s[j])) {
            j++;
            if (i != j) {
                ret.push_back(s.substr(i, j-i));
                i = j;
            }
        }
    }
    return ret;
}
