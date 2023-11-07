// Fig. 5.5: fig05_05.cpp
// Counter-controlled repetition.
#include <iostream>
using std::cout;
using std::endl;

int main() {
	int total = 0; // initialize total

	// total even integers from 2 through 20
	for ( int number = 2; number <= 20; number += 2 ){
		cout <<" "<<number;
		total += number;
		}
			

} // end main

