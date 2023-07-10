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
        void inputGrades();
        void displayGradeReport();
    private:
        string courseName;
        string instuctorName;
        int aCount = 0;
        int bCount = 0;
        int cCount = 0;
        int dCount = 0;
        int fCount = 0;
};
