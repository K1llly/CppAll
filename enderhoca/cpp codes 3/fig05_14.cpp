// Fig. 5.14: fig05_14.cpp
// Counter-controlled repetition.
#include <iostream>
using std::cout;
using std::endl;

int main() {
	int count; 
	for ( count = 1; count <= 10; count++ ) { // loop 10 times
		if ( count == 5 ) // if count is 5,
			continue;      // skip remaining code in loop

		cout << count << " ";
	} // end for

	cout << "\nUsed continue to skip printing 5" << endl;
	return 0; // indicate successful termination

} // end main

