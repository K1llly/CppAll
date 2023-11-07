// Fig. 3.16: GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook_3_15.h" // include definition of class GradeBook

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

