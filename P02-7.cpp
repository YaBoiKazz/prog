#include <iostream>
#include <cmath>
using namespace std;


unsigned long pell(unsigned long n)
{
    unsigned long a = 0, b = 1, c;

    if (n == 0) 
    {
        return a;
    } 

    else if (n == 1)
    {
        return b;
    }

    for (unsigned long i = 2; i <= n; i++) 
    {
        c = 2 * b + a;
        a = b;
        b = c;
    }

    return b;
}


int main()
{
    cout << pell(0) << '\n';
    cout << pell(1) << '\n';
    cout << pell(2) << '\n';
    cout << pell(3) << '\n';
    cout << pell(5) << '\n';
    cout << pell(50) << '\n';

    return 0;
}