#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

using namespace std;

#include "RegisterPage.h"

int main() {
    RegisterPage registerer;
    string NameOfPerson, PassOfPerson;
    int ValOfPerson;

    cout << "Enter User Name:" << endl;
    getline(cin, NameOfPerson);
    registerer.setName(NameOfPerson);

    cout << "Enter User Pass:" << endl;
    getline(cin, PassOfPerson);
    registerer.setPass(PassOfPerson);

    cout << "Enter User Value:" << endl;
    cin >> ValOfPerson;
    registerer.setVal(ValOfPerson);

    registerer.displayBankUser();
    return 0;
}
