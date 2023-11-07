// Fig. 15.1: fig15_01.cpp
// Addition program that displays the sum of two numbers.
#include <iostream>
using namespace std;
int main() {
	std::cout << "Enter weight and height: "; // prompt user for data
	int kg;
	double len;
	cin >> kg >> len; // read first integer from user into number1
	double bmi = kg / ( len*len);

	std::cout << "bmi is " << bmi << std::endl; // display sum; end line

	if((bmi>20 )&&(bmi<25 ))
		cout <<  " normal " << endl;
		else if((bmi>25 )&&(bmi<30 ))
		cout <<  " over weight " << endl;
		
//		std::cout << "\n Bitwise and is "<<	(8&5)<<
//		"\n Bitwise OR is "<<(8|5)<<endl;
}

