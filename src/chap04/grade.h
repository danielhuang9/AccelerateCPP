//
// Created by Daniel Huang on 2020-07-03.
//

#ifndef EXAMPLEPROJECT_GRADE_H
#define EXAMPLEPROJECT_GRADE_H
#include <vector>
#include <iostream>
using namespace std;

double grade(double midterm, double final, double homework);
double median(vector<double> vec);
double grade(double midterm, double final, const vector<double>& hw);
istream& read_hw(istream& in, vector<double>& hw);


#endif //EXAMPLEPROJECT_GRADE_H
