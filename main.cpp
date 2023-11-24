/******************************************************************************
Exercise: Classes and Data Abstraction - This program allows user to enter the
name and major of a student, and randomly generates 5 grades for them.
Skyler Williams
9-11-22
*******************************************************************************/

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {

    string studName, studMajor;

    // Prompt user for student's name and major
    cout << "Enter student's name: ";
    getline(cin, studName);

    cout << "Enter student's major: ";
    getline(cin, studMajor);
    cout << endl;

    // constructor
    Student studInfo(studName, studMajor);

    // Display student's name, major, and grades
    studInfo.PrintStudInfo();
    studInfo.PrintGrades();

    return 0;
}

