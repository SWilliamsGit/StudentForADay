#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student {
    public:
        // Pre: User has entered the student's name and major
        // Post: Student's name and major are printed
        void PrintStudInfo() const;

        // Pre: Array has generated 5 grades
        // Post: Student's grades are printed
        void PrintGrades();

        // Pre: Array has generated 5 grades and grading scale is set
        // Post: Corresponding letter grade to # score is returned
        char GetLetterGrade(int score);

        // constructor
        Student(string name, string major);

    private:
        string name;
        string major;
        int grades[5];
};

#endif // STUDENT_H
