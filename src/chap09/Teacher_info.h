//
// Created by Daniel Huang on 2020-07-15.
//

#ifndef ACCELERATECPP_TEACHER_INFO_H
#define ACCELERATECPP_TEACHER_INFO_H
#include "common/allHeaders.h"
#include "Student_info.h"

class Teacher_info {
public:
    string name, course;
    vector<Student_info> students;
    size_t maxlen;

    Teacher_info(string x, string y, vector<Student_info> z) {
        name = x;
        course = y;
        students = z;
        maxlen = 0;
    }

    void setMaxLen(size_t maxLen);
    string processStudent();

};

#endif //ACCELERATECPP_TEACHER_INFO_H
