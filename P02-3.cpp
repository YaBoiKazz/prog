#include <iostream>
#include <cmath>
#include <iomanip> //for setprecision
using namespace std;


int solve_eq(int a, int b, int c, double& s1, double& s2)
{
    double delta;
    int r;
    delta = pow(b,2) - (4*a*c);

    if (delta == 0)
    {
        s1 = (- b + sqrt(delta)) / (2 * a);
        s2 = NAN;
        r = 1;
    }
        

    else if (delta >= 0)
    {
        s1 = (- b - sqrt(delta)) / (2 * a);
        s2 = (- b + sqrt(delta)) / (2 * a);
        r = 2;
    }
        

    else if (delta < 0)
    {
        s1 = NAN;
        s2 = NAN;
        r = 0;
    }

    return r;
}



int main()
{
    double x1, x2;
    int r = solve_eq(3, 4, -2, x1, x2);
    cout << fixed << setprecision(7)
     << r << ' ' << x1 << ' ' << x2 << '\n';

    return 0;
}