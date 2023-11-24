#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Student.h"
using namespace std;

// Pre: User has entered the student's name and major
// Post: Student's name and major are printed
void Student::PrintStudInfo() const {

    // Print student's name and major
    cout << "Name: " << name << endl;
    cout << "Major: " << major << endl;
}

// Pre: Array has generated 5 grades
// Post: Student's grades are printed
void Student::PrintGrades() {

    cout << "Grades " << endl << "------" << endl;

    // Print the array of grades
    for (int i = 0; i < 5; i++) {
        cout << grades[i] << " / " << GetLetterGrade(grades[i]) << endl;
    }
}

// Pre: Array has generated 5 grades and grading scale is set
// Post: Corresponding letter grade to # score is returned
char Student::GetLetterGrade(int score) {

    // If statements set grading scale and returns letter grade
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}

// constructor
Student::Student(string studName, string studMajor) {

    // Set equal name and major to user-entered name and major
    name = studName;
    major = studMajor;

    srand(time(0));

    // Initialize array of 5 random grades from 0-100
    for (int i = 0; i < 5; i++) {
        grades[i] = (rand() % 100) + 0;
    }
}
