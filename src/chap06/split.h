//
// Created by Daniel Huang on 2020-07-08.
//

#ifndef ACCELERATECPP_SPLIT_H
#define ACCELERATECPP_SPLIT_H

#include "../common/allHeaders.h"

vector<string> split(const string&);
bool is_pal(const string&);
vector<string> find_urls(const string&);
bool not_url_char(char c);
string::const_iterator url_beg (string::const_iterator b, string::const_iterator e);
string::const_iterator url_end (string::const_iterator b, string::const_iterator e);


#endif //ACCELERATECPP_SPLIT_H
