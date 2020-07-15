//
// Created by Daniel Huang on 2020-07-14.
//
#include "Student_info.h"
#include "common/allHeaders.h"
#include "grade.h"

istream& Student_info::read(istream& in) {
    in >> n >> midterm >> final;
    read_hw(in, homework);
    return in;
}

double Student_info::grade() const {
    return ::grade(midterm, final, homework);
}
