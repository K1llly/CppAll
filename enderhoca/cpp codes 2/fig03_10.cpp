// Fig. 3.10: fig03_10.cpp
// Including class GradeBook from file GradeBook.h for use in main.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook_3_09.h" // include definition of class GradeBook

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

