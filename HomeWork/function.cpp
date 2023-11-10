#include "function.h"

using namespace std;

string LetterMover::move(const string &input_str) { 
    string result = input_str;
    for (char &c : result) {
        if (isalpha(c)) { //isalpha alfabedeki karakterlerden biri mi diye bakar
            if (c == 'z') { // z ise a ya küçük
                c = 'a';
            } else if (c == 'Z') { // z ise a ya büyük
                c = 'A';
            } else {
                c++; // Diğer harfleri bir sonraki harfe döndür
            }
        }
    }
    return result;
}