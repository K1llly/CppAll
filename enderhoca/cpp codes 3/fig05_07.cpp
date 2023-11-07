// Fig. 5.5: fig05_05.cpp
// Counter-controlled repetition.
#include <iostream>
using std::cout;
using std::endl;

int main() {
	int counter = 112; // initialize counter

	do {
		cout << counter << " "; // display counter
		counter++; // increment counter
	} while ( counter <= 10 ); // end do...while

	cout << endl; // output a newline

	return 0; // indicate successful termination
} // end main



