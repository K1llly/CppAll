// Fig. 4.14: fig04_14.cpp
// Create GradeBook object and invoke its determineClassAverage function.
#include "fig04_13.cpp" // include definition of class GradeBook

int main() {
// create GradeBook object myGradeBook and
// pass course name to constructor
	GradeBook myGradeBook( "CENG 213 Algorithms-1" );

	myGradeBook.displayMessage(); // display welcome message
	myGradeBook.determineClassAverage(); // find average of 10 grades
} // end main
