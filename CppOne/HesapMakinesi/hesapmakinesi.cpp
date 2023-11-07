#include <iostream>

using  namespace std;

int main() {
    double sum;

    std::cout << "enter 2 numbers:\n";
    int num1;
    int num2;
    cin >> num1 >> num2;

    std::cout << "1) sum 2) subtract 3) multipication 4) divide\n";
    std::cout << "what do you want to do:\n";
    

    int opt;
    cin >> opt;

    if (opt>0 && opt <6){
        if(opt==1)
        {
            sum = num1 + num2;
            std::cout << "your result is: " << sum << std::endl;
        }   

        if(opt==2)
        {
            sum = num1 - num2;
            std::cout << "your result is: " << sum << std::endl;
        }

        if(opt==3)
        {   
            sum = num1 * num2;
            std::cout << "your result is: " << sum << std::endl;
        }

        if(opt==4)
        {
            sum = num1 / num2;
            std::cout << "your result is: " << sum << std::endl;
        }
    }
    

    else
    {
        std::cout << "the option you selected is unavailable or unvalid";
    }
}