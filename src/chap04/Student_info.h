//
// Created by Daniel Huang on 2020-07-06.
//

#ifndef EXAMPLEPROJECT_STUDENT_INFO_H
#define EXAMPLEPROJECT_STUDENT_INFO_H

#include <string>
#include <vector>
using namespace std;

struct Student_info {
    string name;
    double midterm, final;
    vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
istream& read(istream&, Student_info&);
istream& read_hw(istream&, vector<double>&);
#endif //EXAMPLEPROJECT_STUDENT_INFO_H
