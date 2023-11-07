#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;
using std::get;

class Calculator {
    public:

    int a, b, sum = 0;

    void Calculate(string question){
        if(question == "sum"){
            cout << "\nenter 2 numbers: \n";
            cin >> a >> b;
            sum = a + b;
            cout << "\nyour result is: "<< sum << endl;
            cout << endl;
        }
        else if(question == "sub"){
            cout << "\nenter 2 numbers: \n";
            cin >> a >> b;
            sum = a-b;
            cout << "\nyour result is: " << sum << endl;
            cout << endl;
        }

        else if (question == "mult")
        {
            cout << "\nenter 2 numbers: \n";
            cin >> a >> b;
            sum = a*b;
            cout << "\nyour result is: " << sum;
            cout << endl;
        }
        

        else if(question == "div"){
            cout << "\nenter 2 numbers: \n";
            cin >> a >> b;
            sum = a/b;
            cout << "\nyour result is: " << sum;
            cout << endl;
        }


        else{
            cout << "\nInvalid selection\n";
            cout << endl;
        }


    }
};