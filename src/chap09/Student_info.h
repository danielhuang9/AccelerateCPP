//
// Created by Daniel Huang on 2020-07-14.
//

#ifndef ACCELERATECPP_STUDENT_INFO_H
#define ACCELERATECPP_STUDENT_INFO_H
#include "common/allHeaders.h"

class Student_info {
private:
    string n;
    double midterm, final;
    vector<double> homework;
public:
    Student_info(){};
    Student_info(istream& in){};

    string name() const {
        return n;
    }

    bool valid() const {
        return !homework.empty();
    }

    istream& read(istream& in);
    double grade() const;

};

bool compare(const Student_info&, const Student_info&);

#endif //ACCELERATECPP_STUDENT_INFO_H
