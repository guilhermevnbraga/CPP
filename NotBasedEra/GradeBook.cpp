#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "GradeBook.h"

GradeBook::GradeBook(string courseName, string instructorName)
{
    setCourseName(courseName);
    setInstuctorName(instructorName);
}

void GradeBook::setCourseName(string name)
{
    if (name.length() <= 25)
        courseName = name;
    else
    {
        courseName = name.substr(0, 25);
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
             << "Limiting courseName to first 25 characters.\n"
             << endl;
    }
}

string GradeBook::getCourseName()
{
    return courseName;
}

void GradeBook::setInstuctorName(string name)
{
    instuctorName = name;
}

string GradeBook::getInstructorName()
{
    return instuctorName;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the Grade Book for\n"
         << getCourseName() << "!"
         << endl;
    cout << "This course is presented by: " << getInstructorName() << "!"
         << endl
         << endl;
}

void GradeBook::determineClassAverage()
{
    int total = 0;
    int gradeCounter = 0;
    double grade = 0;
    double average;

    while (grade >= 0)
    {
        total += grade;
        gradeCounter++;

        cout << "Enter grade or negative to quit: ";
        cin >> grade;
    }

    if (gradeCounter != 0)
    {
        average = static_cast<double>(total) / gradeCounter;

        cout << "\nTotal of all " << gradeCounter << " grades entered is "
             << total << endl;
        cout << "Class average is " << setprecision(2) << fixed << average
             << endl;
    }
    else
        cout << "No grades were entered" << endl;
}

void GradeBook::inputGrades()
{
    int grade;

    cout << "Enter the letter grades." << endl
         << "Enter the EOF character to end input." << endl;

    while ((grade = cin.get()) != EOF)
    {
        switch (grade)
        {
        case 'A':
        case 'a':
            aCount++;
            break;

        case 'B':
        case 'b':
            bCount++;
            break;

        case 'C':
        case 'c':
            cCount++;
            break;

        case 'D':
        case 'd':
            dCount++;
            break;
        case 'F':
        case 'f':
            fCount++;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;

        default:
            cout << "Incorrect letter grade entered."
                 << "Enter a new grade." << endl;
        }
    }
}

void GradeBook::displayGradeReport()
{
    cout << "\n\nNumber of stundents who received each letter grade:"
         << "\nA: " << aCount
         << "\nB: " << bCount
         << "\nC: " << cCount
         << "\nD: " << dCount
         << "\nF: " << fCount
         << endl;
}
