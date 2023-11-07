// BankVault.h

#include <string>
using std::string;
using std::getline;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class BankVault {
private:
    string BankAccN[5] = {"gokay", "ebrar", "furkan", "doga", "cagri"};
    string BankAccP[5] = {"ebrar123", "gokay123", "doga123", "furkan123", "abuyusikim123"};
    string BankAccV[5] = {"10", "100", "500", "1000", "0"};

public:
    void BankAccess(std::string name, std::string password) {
        bool found = false;

        for (int i = 0; i < 5; i++) {
            if (name == BankAccN[i] && password == BankAccP[i]) {
                cout << "Account Balance: " << BankAccV[i] << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Invalid username or password" << endl;
        }
    }
};

