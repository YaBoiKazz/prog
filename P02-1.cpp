#include <iostream>
using namespace std;


int adigits(int a, int b, int c)
{
   int n = 0;

    if ((a >= b) && ( a >= c) && ( b >= c)) 
        n += a*100 + b*10 + c;

    else if ((a >= b) && ( a >= c) && ( c >= b))
        n += a*100 + c*10 + b;

    else if ((b >= a) && ( b >= c) && ( a >= c))
        n += b*100 + a*10 + c;

    else if ((b >= a) && ( b >= c) && ( c >= a))
        n += b*100 + c*10 + a;

    else if ((c >= a) && ( c >= b) && ( a >= b))
        n += c*100 + a*10 + b;
    
    else if ((c >= a) && ( c >= b) && ( b >= a))
        n += c*100 + b*10 + a;

    return n;
}






int main()
{
    cout << adigits(4, 2, 5) << '\n';
    cout << adigits(9, 1, 9) << '\n';
    cout << adigits(1, 2, 3) << '\n';
    cout << adigits(1, 0, 0) << '\n';
    return 0;
}
