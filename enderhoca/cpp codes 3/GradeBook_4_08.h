// Fig. 4.8: GradeBook.h
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
//newly added to 3.16
		void determineClassAverage(); // averages grades entered by the user

	private:
		string courseName; // course name for this GradeBook
}; // end class GradeBook


