// Fig. 6.3: fig06_03.cpp
// Create GradeBook object, input grades and display grade report.
#include <string> // program uses C++ standard string classusing namespace std;
using namespace std;

// GradeBook class definition
class GradeBook {
	public:
		GradeBook( string ); // constructor initializes course name
		void setCourseName( string ); // function to set the course name
		string getCourseName(); // function to retrieve the course name
		void displayMessage(); // display a welcome message
		void inputGrades(); // input three grades from user
		void displayGradeReport(); // display a report based on the grades
		int maximum( int, int, int ); // determine max of 3 values
	private:
		string courseName; // course name for this GradeBook
		int maximumGrade; // maximum of three grades

};
