// Fig. 3.17: fig03_17.cpp
// GradeBook class demonstration after separating
// its interface from its implementation.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook_3_16.h" // include definition of class GradeBook

// function main begins program execution
int main() {
	// create two GradeBook objects
	GradeBook gradeBook1( "CENG 201 Algorithms and Data Structures" );
	GradeBook gradeBook2( "CENG 202 Data Structures in C++" );

	// display each GradeBook's courseName
	cout << "gradeBook1's initial course name is: "
	     << gradeBook1.getCourseName()
	     << "\ngradeBook2's initial course name is: "
	     << gradeBook2.getCourseName() << endl;

	// modify myGradeBook's courseName (with a valid-length string)
	gradeBook1.setCourseName( "CENG 201 Algorithms-1" );

	// display each GradeBook's courseName
	cout << "\ngradeBook1's course name is: "
	     << gradeBook1.getCourseName()
	     << "\ngradeBook2's course name is: "
	     << gradeBook2.getCourseName() << endl;
	return 0; // indicate successful termination
} // end main

