//
// Created by Daniel Huang on 2020-07-06.
//

#ifndef EXAMPLEPROJECT_XTEST_H
#define EXAMPLEPROJECT_XTEST_H

#include "xtest.h"
#include "grade.h"
#include "Student_info.h"

#include <iostream>
#include <iomanip>
using namespace std;

void test() {
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    while (read(cin, record)) {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    sort(students.begin(), students.end(), compare);


    for (vector<Student_info>::size_type i = 0; i != students.size(); i++) {
        cout << students[i].name << string(maxlen + 1- students[i].name.size(), ' ');
        try {
            double final_grade = grade(students[i].midterm, students[i].final, students[i].homework);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec);
        }
        catch (domain_error e) {
            cout << e.what();
        }
        cout << endl;
    }

    cout << "output" << endl;
    for (auto& recordItem : students) {
        cout << recordItem.name << endl;
    }

    cout << "finished" << endl;
}

#endif //EXAMPLEPROJECT_XTEST_H
