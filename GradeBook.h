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
        void determineClassAverage();
    private:
        string courseName;
        string instuctorName;
};
