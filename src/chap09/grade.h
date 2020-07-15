//
// Created by Daniel Huang on 2020-07-14.
//

#ifndef ACCELERATECPP_GRADE_H
#define ACCELERATECPP_GRADE_H
#include "common/allHeaders.h"
#include "Student_info.h"

double grade(double midterm, double final, double homework);
double median(vector<double> vec);
double grade(double midterm, double final, const vector<double>& hw);
istream& read_hw(istream& in, vector<double>& hw);
bool compare(const Student_info& x, const Student_info& y);

#endif //ACCELERATECPP_GRADE_H
