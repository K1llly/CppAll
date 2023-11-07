// RegisterPage.h
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

class RegisterPage
{
private:
    string name, pass;
    int val;

public:
    void setName(string PersonName) {
        name = PersonName;
    }

    void setPass(string PersonPass) {
        pass = PersonPass;
    }

    void setVal(int PersonVal) {
        val = PersonVal;
    }

    string getPersonName() {
        return name;
    }

    string getPersonPass() {
        return pass;
    }

    int getPersonVal() {
        return val;
    }

    void displayBankUser() {
        cout << "Hello " << getPersonName() << "\nYour Password is: " << getPersonPass() << "\nYour Bank Account Has: " << getPersonVal() << " Values." << endl;
    }
};
