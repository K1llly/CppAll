#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;
using std::get;

#include "Calculator.h"

int main(){

    
    while (true)
    {
        cout << "\nWhat do you want to do?\n1)Calculate 2)Exit\n";
        int selection;
        cin >> selection;

        if (selection == 1)
        {
            Calculator Quest;
            cout << "\nsum, sub, mult or dib: \n";
            string answer;
            getline( cin, answer);
            cin >> answer;
            Quest.Calculate(answer);
        }

        else if (selection == 2)
        {
            break;
        }
        
        
        else
        {
            cout << "\nInvalid selection\n" << endl;
        }

    }
    return 0;
}