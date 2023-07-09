#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook(string courseName, string instructorName)
{
    setCourseName(courseName);
    setInstuctorName(instructorName);
}

void GradeBook::setCourseName(string name)
{
    courseName = name;
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
         << endl;
}
