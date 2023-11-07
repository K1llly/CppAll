#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

#include "BankVault.h"

/*
int main() {
    string q1;
    string qp1;
    BankVault bank;

    cout << "Account name: " << endl;
    cin >> q1;

    cout << "Account pass: " << endl;
    cin >> qp1;

    bank.BankAccess(q1, qp1);

    return 0;
}
*/
int main() {
    while (true)
    {
        cout << "What do you want to do? \n1) Bank 2) Exit \n";
        int choice;
        cin >> choice;

        if(choice == 1){
            string q1;
            string qp1;
            BankVault bank;

            cout << "Account name: " << endl;
            cin >> q1;

            cout << "Account pass: " << endl;
            cin >> qp1;

            bank.BankAccess(q1, qp1);
        }

        else if (choice == 2)
        {
            break;
        } else {
            cout << "invalid selection" << endl;
        }
        
    }
    return 0;
}


