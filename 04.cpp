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
    GradeBook myGradeBook( "Curso Tecnico Integrado em Eletronica" );

    cout << "Initial course name is: " << myGradeBook.getCourseName()
        << endl;

    cout << "Please enter the course name: ";
    getline( cin, nameOfCourse );
    myGradeBook.setCourseName( nameOfCourse );
    cout << endl;

    myGradeBook.displayMessage();

    return 0;
}
