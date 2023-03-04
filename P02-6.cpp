#include <iostream>
using namespace std;


unsigned long mersenneof(unsigned long a)
{
    unsigned long x; 
    
    x = 1;
    if (a > 0)
    {
        for(unsigned long i = 1; i <= a; i++ )
        {
            x = x * 2;
            i++;
        }
    }
    x = x - 1;

    return x;
}


unsigned long next_mersenne(unsigned long n)
{
    unsigned long r = 0;

    unsigned long i = 0;  

    while (true)
    {

        if (mersenneof(i) >= n)
            {
                r += mersenneof(i);
                break;
            }
        
         i++;
    }

    return r;
}



int main() 
{
    cout << next_mersenne(0) << '\n';
    cout << next_mersenne(1) << '\n';
    cout << next_mersenne(2) << '\n';
    cout << next_mersenne(4) << '\n';
    cout << next_mersenne(128) << '\n';
    cout << next_mersenne(4294967296UL) << '\n';

    return 0;
}