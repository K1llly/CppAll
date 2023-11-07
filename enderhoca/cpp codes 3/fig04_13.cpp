// Fig. 4.13: GradeBook.cpp
// Member-function definitions for class GradeBook that solves the
// class average program with sentinel-controlled repetition.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed; // ensures that decimal point is displayed

#include <iomanip> // parameterized stream manipulators  
using std::setprecision; // sets numeric output precision

#include "GradeBook_4_08.h" // include definition of class GradeBook
using namespace std;
// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name ) {
	setCourseName( name ); // call set function to initialize courseName
} // end GradeBook constructor

// function that sets the course name;
// ensures that the course name has at most 25 characters
void GradeBook::setCourseName( string name ) {
	if ( name.length() <= 25 ) // if name has 25 or fewer characters
		courseName = name; // store the course name in the object
	if ( name.length() > 25 ) { // if name has more than 25 characters
		// set courseName to first 25 characters of parameter name
		courseName = name.substr( 0, 25 ); // start at 0, length of 25

		cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
		     << "Limiting courseName to first 25 characters.\n" << endl;
	} // end if
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName() {
	return courseName; // return object's courseName
} // end function getCourseName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() {
	// call getCourseName to get the courseName
	cout << "Welcome to the grade book for\n" << getCourseName()
	     << "!" << endl;
} // end function displayMessage

// determine class average based on 10 grades entered by user
void GradeBook::determineClassAverage() {

	int total; // sum of grades entered by user
	int gradeCounter; // number of the grade to be entered next
	int grade; // grade value entered by user
	double average; // number with decimal point for average

	// initialization phase
	total = 0; // initialize total
	gradeCounter = 0; // initialize loop counter

	// processing phase
	// prompt for input and read grade from user
	cout << "Enter grade or -1 to quit: ";
	cin >> grade; // input grade or sentinel value

	// loop until sentinel value read from user
	while ( grade != -1 ) { // while grade is not -1
		total = total + grade; // add grade to total
		gradeCounter = gradeCounter + 1; // increment counter

		// prompt for input and read next grade from user
		cout << "Enter grade or -1 to quit: ";
		cin >> grade; // input grade or sentinel value
	} // end while
	// termination phase
	if ( gradeCounter != 0 ) { // if user entered at least one grade...
		// calculate average of all grades entered
		average = static_cast< double >( total ) / gradeCounter;

		// display total and average (with two digits of precision)
		cout << "\nTotal of all " << gradeCounter << " grades entered is "
		     << total << endl;
		cout << "Class average is " << setprecision( 2 ) << fixed << average
		     << endl;
	} // end if
	else // no grades were entered, so output appropriate message
		cout << "No grades were entered" << endl;
} // end function determineClassAverage



