// Fig. 5.9: GradeBook.h
//Definition of class GradeBook that determines a class average.
// Member functions are defined in GradeBook.cpp

#include <string> // class GradeBook uses C++ standard string class
using std::string;

// GradeBook class definition
class GradeBook {
	public:
		GradeBook( string ); // constructor that initializes courseName
		void setCourseName( string ); // function that sets the course name
		string getCourseName(); // function that gets the course name
		void displayMessage(); // function that displays a welcome message
		void determineClassAverage(); // averages grades entered by the user
		//newly added to fig4.08
		void inputGrades(); // input arbitrary number of grades from user
		void displayGradeReport(); // display a report based on the grades


	private:
		string courseName; // course name for this GradeBook
		int aCount; // count of A grades
		int bCount; // count of B grades
		int cCount; // count of C grades
		int dCount; // count of D grades
		int fCount; // count of F grades

}; // end class GradeBook


