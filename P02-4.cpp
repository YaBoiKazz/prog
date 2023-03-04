#include <iostream>
using namespace std;

unsigned long factorial(unsigned long n)
{
    unsigned long r;
    unsigned long i = 0;
    r = 1;

    if (n > 0)
    {
         while(true)
    {
        r = r * (n - i);

        if (n - i == 1)
            break;
        i++;
    }

    }


   
    return r;

}


 unsigned long bc(unsigned long n, unsigned long k)
 {
    unsigned long a,b,c;

    a = factorial(n);

    b = factorial(k) * factorial(n-k);

    c = a / b;

    if (b > 0)
    return c;

    else 
    return 1;
 }



int main()
{
    cout << bc(5, 0) << '\n';
    cout << bc(5, 5) << '\n';
    cout << bc(5, 1) << '\n';
    cout << bc(5, 2) << '\n';
    cout << bc(12, 7) << '\n';

    return 0;
}