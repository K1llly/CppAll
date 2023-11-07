// Fig. 3.9: GradeBook.h

// GradeBook class definition in a separate file from main.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // program uses C++ standard string class
using std::string;
using std::getline;

// GradeBook class definition
class GradeBook {
	public:
		// constructor initializes courseName with string supplied as argument
		GradeBook( string name ) {
			setCourseName( name ); // call set function to initialize courseName
		} // end GradeBook constructor

		// function that sets the course name
		void setCourseName( string name ) {
			courseName = name; // store the course name in the object
		} // end function setCourseName

		// function that gets the course name
		string getCourseName() {
			return courseName; // return the object's courseName
		} // end function getCourseName
		// function that displays a welcome message
		void displayMessage() {
			// this statement calls getCourseName to get the
			// name of the course this GradeBook represents
			cout << "Welcome to the grade book for\n" << getCourseName() << "!"
			     << endl;
		} // end function displayMessage
	private:
		string courseName; // course name for this GradeBook
}; // end class GradeBook


