#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class GradeBook {
    public:
        GradeBook ( string courseName, string instructorName) {
            setCourseName( courseName );
            setInstuctorName( instructorName );
        }

        void setCourseName ( string name ) {
            courseName = name;
        }

        string getCourseName() {
            return courseName;
        }

        void setInstuctorName( string name ) {
            instuctorName = name;
        }

        string getInstructorName() {
            return instuctorName;
        }

        void displayMessage() {
            cout << "Welcome to the Grade Book for\n" << getCourseName() << "!"
                << endl;
            cout << "This course is presented by: " << getInstructorName() << "!"
                << endl;
        }
    private:
        string courseName;
        string instuctorName;
};