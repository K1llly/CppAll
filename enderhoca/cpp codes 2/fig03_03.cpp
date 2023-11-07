// Fig. 3.3: fig03_03.cpp
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
		// function that displays a welcome message to the GradeBook user
		void displayMessage( string courseName, int i ) {
			cout << "Welcome to the grade book for " << courseName << "! "
			     <<i<< endl;
		} // end function displayMessage
}; // end class GradeBook


// function main begins program execution
int main() {
	string nameOfCourse;
	GradeBook myGradeBook; // create a GradeBook object named myGradeBook
	// prompt for and input course name
	cout << "Please enter the course name:" << endl;
	getline( cin, nameOfCourse ); // read a course name with blanks
	cout << endl; // output a blank line
	// call myGradeBook's displayMessage function
	// and pass nameOfCourse as an argument
	myGradeBook.displayMessage( nameOfCourse, 6 );

} // end main

