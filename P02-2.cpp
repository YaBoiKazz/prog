#include <iostream>
using namespace std;


bool is_leap_yr(int y)
{
    bool p;

    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
        p = true;
    else    
        p = false;

    return p;
}
    
int f(int mo, int yr) //ouputs the days in a month according to the month and the yr
{   
    int d;
    switch (mo)
    {
        case 2: //fev
           
            if (is_leap_yr(yr) == true)
                d = 29;
            else
                d = 28;
        break;

        case 1: case 3: case 5: 
        case 7: case 8: case 10: 
        case 12:

            d = 31;
            break;

        default:
            d = 30;
            break;

    }

    return d;

}




void advance(int delta, int& d, int& m, int& y) // ser por ref permite alterar o valor de d,m,y no espaço main pq copia o endereço em vez do valor da variavel
{   
    d += delta;  

    while (true)
    {
        if (d > f(m,y))
        {
            d -= f(m,y);
            m++;
        }
           

        if (m > 12)
        {
            m -= 12;
            y++;
        }
        
        if ((m <= 12) && (d <= f(m,y)))
            break;
        
    }
    

}





int main ()
{
    int d = 1, m = 1, y = 2022;

    advance(20, d, m, y); 
    cout << d << ' ' << m << ' ' << y;



    return 0;
}