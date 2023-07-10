#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

#include "GradeBook.h"

int main() {
    string nameOfCourse;
    string nameOfInstructor;
    GradeBook myGradeBook( "Curso Tecnico Integrado em Eletronica", "Luciano Lindoso" );

    cout << "Initial course name is: " << myGradeBook.getCourseName()
        << endl;

    cout << "Please enter the course name: ";
    getline( cin, nameOfCourse );
    myGradeBook.setCourseName( nameOfCourse );
    cout << endl;

    cout << "Initial instructor name is: " << myGradeBook.getInstructorName()
        << endl;

    cout << "Please enter the instructor name: ";
    getline( cin, nameOfInstructor );
    myGradeBook.setInstuctorName( nameOfInstructor );

    myGradeBook.displayMessage();

    myGradeBook.determineClassAverage();

    return 0;
}
