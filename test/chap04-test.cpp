//
// Created by Daniel Huang on 2020-07-03.
//
#include "gtest/gtest.h"
#include "chap04/grade.h"
#include "chap04/xtest.h"
using namespace std;

TEST(Chap04Test, test01) {
    double res = grade(100, 100, 100);
    //EXPECT_EQ (res, 99);
}

TEST(Chap04Test, test02) {
    vector<double> vec = {2, 3, 4};
    double medianValue = median(vec);

    int i = 0;
    //double res = grade(100, 100, 100);
    EXPECT_EQ (medianValue, 3);
}


/* void test4() {
    cout << "Name: ";
    string name;
    cin >> name;

    cout << "midterm and finals: ";
    double midterm, final;
    cin >> midterm >> final;

    cout << "enter homework: ";

    vector<double> homework;

    read_hw(cin, homework);

    try {
        double final_grade = grade(midterm, final, homework);
        streamsize prec = cout.precision();
        cout << "Your final grade is " << final_grade << endl;
    } catch (domain_error) {
        cout << endl << "You must enter your grades.";
        //return 1;
    }

} */

TEST(Chap04Test, test03) {
    vector<double> hw = {100,100,100};
    double midterm = 100;
    double final = 100;
    double res = grade(midterm, final, hw);
    int i = 0;
    EXPECT_EQ (res, 100);
}

TEST(Chap04Test, test04) {
    test();
}
