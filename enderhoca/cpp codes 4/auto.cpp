// C++ Program to illustrate the auto storage class
// variables
#include <iostream>
using namespace std;

void autoStorageClass()
{

	cout << "Demonstrating auto class\n";

	// Declaring an auto variable
    int count = 10;
    int& countRef = count;
    auto myAuto = countRef;

	// printing the auto variables
	countRef = 11;
    cout << count << " ";

    myAuto = 12;
    cout << count << endl;
    
	cout << myAuto<< typeid(myAuto).name()<<" \n";

}

int main()
{

	// To demonstrate auto Storage Class
	autoStorageClass();

	return 0;
}
