#include <iostream>
using namespace std;

#include <string>
using std::string;

class BankVault {
private:
    string personA = "alp";
    string personAP = "alp123";
    int personAV = 10;

    

public:
    void BankAccess(string name, string password) {
        if (name == personA && password == personAP) {
            cout << "Account Balance: " << personAV << endl;
        } else {
            cout << "Invalid username or password" << endl;
        }
    }
};

int main() {
    string q1;
    string qp1;
    BankVault bank;

    cout << "Account name: ";
    cin >> q1;

    cout << "Account pass: ";
    cin >> qp1;

    bank.BankAccess(q1, qp1);

    return 0;
}