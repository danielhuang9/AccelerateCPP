//
// Created by Daniel Huang on 2020-07-15.
//

#include "Teacher_info.h"
#include "Student_info.h"
#include "common/allHeaders.h"
#include "grade.h"

void Teacher_info::setMaxLen(size_t maxLen) {
    maxlen = maxLen;
}

string Teacher_info::processStudent() {
    sort(students.begin(), students.end(), compare);

    for (vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
        cout << students[i].name() << string(maxlen + 1 - students[i].name().size(), ' ');
        try {
            double final_grade = students[i].grade();
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec) << endl;
        }
        catch (domain_error e) {
            cout << e.what() << endl;
        }
    }

    cout << name << " teaches " << course << " with " << students.size() << " students." << endl;

}

