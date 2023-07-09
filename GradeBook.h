#include <string>
using std::string;

class GradeBook {
    public:
        GradeBook ( string, string );
        void setCourseName ( string );
        string getCourseName();
        void setInstuctorName( string );
        string getInstructorName();
        void displayMessage();
    private:
        string courseName;
        string instuctorName;
};
