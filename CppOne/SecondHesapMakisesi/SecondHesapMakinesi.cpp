#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;
using std::get;

class calculator {
    public:

    int b, c;
    double sum1;
    void calculate(string question){
        if(question == "sum"){
            cout << "enter 2 numbers: \n";
            int a;
            int b;

            cin >> a >> b;
            int sum = a + b;
            cout << "your result is: "<< sum << endl;
        }
        if(question == "sub"){
            cout << "enter 2 numbers: \n";
            int a;
            int b;

            cin >> a >> b;
            cout << "your result is: " << a-b << endl;
        }

        if (question == "mult")
        {
            cout << "enter 2 numbers: \n";
            cin >> b >> c;
            sum1 = b*c;
            cout << "your result is: " << sum1;
        }
        

        if(question == "div"){
            cout << "enter 2 numbers: \n";
            cin >> b >> c;
            sum1 = b/c;
            cout << "your result is: " << sum1;
        }
    }
};

int main() {
    string q1;
    calculator quest;

    cout << "sum, sub, mult or dib: \n";
    getline( cin, q1);
    cout << endl;

    quest.calculate(q1);
}

