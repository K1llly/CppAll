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
	string nameOfCourse;
	GradeBook myGradeBook; // create a GradeBook object named myGradeBook
	// prompt for, input and set course name
	cout << "\nPlease enter the course name:" << endl;
	getline( cin, nameOfCourse ); // read a course name with blanks
	myGradeBook.setCourseName( nameOfCourse ); // set the course name

	cout << endl; // outputs a blank line
	myGradeBook.displayMessage(); // display message with new course name


} // end main

