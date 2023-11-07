#include <iostream>
using namespace std;

#include <string>
using std::string;

class BankVault {
private:
    string BankAccN[5] = {"gokay", "ebrar", "furkan", "doga", "cagri"};
    string BankAccP[5] =  {"ebrar123", "gokay123", "doga123", "furkan123", "abuyusikim123"};
    string BankAccV[5] = {"10", "100", "500", "1000", "0"};
public:
    void BankAccess(string name, string password) {
        bool found = false; 

        for (int i = 0; i < 5; i++) {
            if (name == BankAccN[i] && password == BankAccP[i]) {
                cout << "Account Balance: " << BankAccV[i] << endl;
                found = true; // Kullanıcıyı bulduk, bool true yaparız.
                break; // Kullanıcıyı bulduktan sonra döngüyü sonlandırırız.
            }
        }

        if (!found) {
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