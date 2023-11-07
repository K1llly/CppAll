// Calculate the product of three integers
#include <iostream> // enables program to perform input and output
using namespace std; // program uses names from the std namespace

// function main begins program execution
int main() {
   int x{0}; // first integer to multiply
   int y{0}; // second integer to multiply
   int z{0}; // third integer to multiply
   int result{0}; // the product of the three integers

   cout << "Enter three integers: "; // prompt user for data
   cin >> x >> y >> z; // read three integers from user
   result = x * y * z; // multiply the three integers; store result
   cout << "The product is " << result << endl; // print result; end line
} // end function main 

