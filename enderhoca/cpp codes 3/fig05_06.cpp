// Fig. 5.5: fig05_05.cpp
// Counter-controlled repetition.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw; // enables program to set a field width
using std::setprecision;

#include <cmath> // standard C++ math library         
using std::pow; // enables program to use function pow

int main() {
	double amount; // amount on deposit at end of each year
	double principal = 1000.0; // initial amount before interest
	double rate = .06; // interest rate

	// display headers
	cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;

	// set floating-point number format
	cout << fixed << setprecision( 3 );
	// calculate amount on deposit for each of ten years
	for ( int year = 1; year <= 10; year++ ) {
		// calculate new amount for specified year
		amount = principal * pow( 1.0 + rate, year );

		// display the year and the amount
		cout << setw( 4 ) << year << setw(13 ) << amount << endl;
	} // end for

	return 0; // indicate successful termination
} // end main



