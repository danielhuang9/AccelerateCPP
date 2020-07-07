//
// Created by Daniel Huang on 2020-07-03.
//
#include "grade.h"
#include "Student_info.h"
#include <vector>
using namespace std;

double grade(double midterm, double final, double homework)
{
    double res = 0.2 * midterm + 0.4 * final + 0.4 * homework;
    return res;
}

double median(vector<double> vec) {
    int size = vec.size();

    sort(vec.begin(), vec.end());
    int mid = size/2;

    return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}

double grade(double midterm, double final, const vector<double>& hw) {
    if (hw.size() == 0)
        throw domain_error("error");
    return grade(midterm, final, median(hw));
}

istream& read_hw(istream& in, vector<double>& hw) {
    if (in) {
        hw.clear();
        double x;
        while (in >> x) {
            hw.push_back(x);
        }
        in.clear();
    }
    return in;
}

bool compare(const Student_info& x, const Student_info& y) {
    return x.name < y.name;
}

istream& read(istream& is, Student_info& s) {
    is >> s.name >> s.midterm >> s.final;
    read_hw(is, s.homework);
    return is;
}