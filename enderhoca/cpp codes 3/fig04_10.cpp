// Fig. 4.10: fig04_10.cpp
// Create GradeBook object and invoke its determineClassAverage function.
#include "GradeBook_4_09.h" // include definition of class GradeBook

int main() {
// create GradeBook object myGradeBook and
// pass course name to constructor
	GradeBook myGradeBook( "CENG 213 Algorithms-1 aaaaaaaaaaaaaaaaaaaa" );

	myGradeBook.displayMessage(); // display welcome message
	myGradeBook.determineClassAverage(); // find average of 10 grades
	
	
//	int product = 3;
//	while ( product <= 100 )   product = 3 * product;
//cout<<product;
} // end main
