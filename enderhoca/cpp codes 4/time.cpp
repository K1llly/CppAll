#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    time_t s = std::time(0); // time_t is int64 in windows 10 64bit.
    time_t n;

    do {
        n = std::time(0);
        std::cout << n << " ";
    } while ((s + 3) > n); // repeat until 3 sec passed.

int lol;
int totaltimes;
time (0);
cout << time (0)<<endl;
totaltimes = time(0);
cout<<"\n\ntotaltimes="<<totaltimes<<endl;
double divisor = (60 * 60 * 24 * 365);
cout<<"cur year="<<int((totaltimes/divisor)+1970)<<endl;

    return 0;
}

