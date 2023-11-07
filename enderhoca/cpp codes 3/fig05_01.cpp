// Fig. 5.1: fig05_01.cpp
// Counter-controlled repetition.
#include <iostream>
using std::cout;
using std::endl;

int main() {
	int counter = 1; // declare and initialize control variable

	while ( counter <= 10 ) { // loop-continuation condition
		cout << counter++ << endl;
		counter++; // increment control variable by 1
	} // end while

	cout << endl; // output a newline
	return 0; // successful termination
} // end main

