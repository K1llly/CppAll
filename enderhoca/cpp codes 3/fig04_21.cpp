// Fig. 4.21: fig04_21.cpp
// Preincrementing and postincrementing.
#include <iostream>
using std::cout;
using std::endl;

int main() {
	int c;

	// demonstrate postincrement
	c = 5; // assign 5 to c
	cout << c << endl; // print 5
	cout << c++ << endl; // print 5 then postincrement
	cout << c << endl; // print 6

	cout << endl; // skip a line

	// demonstrate preincrement
	c = 5; // assign 5 to c
	cout << c << endl; // print 5
	cout << ++c << endl; // preincrement then print 6
	cout << c << endl; // print 6
	return 0; // indicate successful termination
} // end main

