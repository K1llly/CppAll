#include <iostream>
#include "function.h"
using namespace std;

int main() {

    string input_str;
    cout << "Enter a string: ";
    cin >> input_str; // Kullanıcının girdiği metni alıyoruz.

    string result = LetterMover::move(input_str); // LetterMover sınıfının move fonksiyonunu kullanarak metni dönüştürüyoruz
    cout << "Result: " << result << endl;

    return 0;
}
