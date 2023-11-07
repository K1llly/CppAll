// Fig. 5.11: fig05.11.cpp
// Create GradeBook object and invoke its determineClassAverage function.
#include "GradeBook_6_04.h" // include definition of class GradeBook

int main() {
// create GradeBook object myGradeBook and
// pass course name to constructor
	GradeBook myGradeBook( "CENG 213 Algorithms & Data Structures-1 " );

	myGradeBook.displayMessage(); // display welcome message
	myGradeBook.inputGrades(); // find average of 10 grades
	myGradeBook.displayGradeReport(); // display report based on grades
} // end main
