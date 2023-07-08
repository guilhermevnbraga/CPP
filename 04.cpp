#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class GradeBook {
    public:
        GradeBook ( string name ) {
            setCourseName( name );
        }

        void setCourseName ( string name ) {
            courseName = name;
        }

        string getCourseName() {
            return courseName;
        }

        void displayMessage() {
            cout << "Welcome to the Grade Book for\n" << getCourseName() << "!"
                << endl;
        }
    private:
        string courseName;
};

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
