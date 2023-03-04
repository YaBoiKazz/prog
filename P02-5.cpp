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

 unsigned long bell(unsigned long n)
 {
    unsigned long r = 0;
    
    if ((n != 1) && (n != 0))
    {
           for(unsigned long i = 0; i <= n-1; i++)
        {
            r += bc(n-1,i) * bell(i);
        }
    }
    else
        r += 1;

    return r;
 }


int main()
{
    cout << bell(0) << '\n';
    cout << bell(1) << '\n';
    cout << bell(2) << '\n';
    cout << bell(3) << '\n';
    cout << bell(4) << '\n';
    cout << bell(6) << '\n';
    
    return 0;
}