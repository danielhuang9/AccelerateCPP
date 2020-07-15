//
// Created by Daniel Huang on 2020-07-14.
//

#ifndef ACCELERATECPP_XTEST_H
#define ACCELERATECPP_XTEST_H
#include "common/allHeaders.h"
#include "Student_info.h"
#include "Teacher_info.h"

void test09() {
    vector<Student_info> students;
    Student_info record;
    size_t maxlen = 0;
    // 1. populate students vector
    while (record.read(cin)) {
        maxlen = max(maxlen, record.name().size());
        students.push_back(record);
    }

    // step 2. create one teacher instance
    Teacher_info t1("teacher1", "english", students);
    t1.setMaxLen(maxlen);

    t1.processStudent();



}
#endif //ACCELERATECPP_XTEST_H
