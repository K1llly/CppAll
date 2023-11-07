// Fig. 3.7: fig03_07.cpp
// Define class GradeBook with a member function that takes a parameter;
// Create a GradeBook object and call its displayMessage function.
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



// function main begins program execution
int main() {
	// create two GradeBook objects
	GradeBook gradeBook1( "CENG 201 Introduction to C++ Programming" );
	GradeBook gradeBook2( "CENG 201 Data Structures in C++" );

	// display initial value of courseName for each GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
	     << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
	     << endl;


} // end main

