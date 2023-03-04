
#include "interval.h"

bool maior( time_of_day x, time_of_day y)
{
    bool r;

    if (x.h > y.h)
        r = true;
    
    if (x.h == y.h)
    {
        if (x.m > y.m)
            r = true;
        else
            r = false;
    } 

    if (x.h < y.h)
        r = false;

    return r;
}




interval intersection(interval a, interval b)
{
    interval c;

    if ((maior(b.start, a.end) == true && maior(b.start, a.start) == true) || ((maior(b.end, a.end) == true) && (maior(a.start, b.end) == true))) 
    
        c = {00, 00};

    if (((b.end.h == a.start.h) && (b.end.m == a.start.m)) || ((a.end.h == b.start.h) && (a.end.m == b.start.m)))
        c = {00,00};

    if ((maior(b.start, a.start) == true) && (maior(a.end, b.end) == true))
        c = b;
    
    if ((maior(a.start, b.start) == true ) && (maior(b.end, a.end) == true))
        c = a;

    
    if ((maior(b.start, a.start) == true) && (maior(b.end, a.end) == true))
        c = {b.start, a.end};

    if ((maior(a.start, b.start) == true) && (maior(a.end, b.end) == true))
        c = {a.start, b.end};

    return c;

}





int main()
{
    cout << intersection( { { 12, 30 }, { 14, 30 } },
                        { { 17, 30 }, { 18, 30 } } ) << '\n';
    cout << intersection( { { 12, 30 }, { 14, 30 } },
                        { { 14, 30 }, { 18, 30 } } ) << '\n';
    cout << intersection( { { 12, 30 }, { 14, 31 } },
                        { { 14, 30 }, { 18, 30 } } ) << '\n';
    cout << intersection( { { 14, 30 }, { 15, 59 } },
                        { { 11, 30 }, { 14, 31 } } ) << '\n';
    cout << intersection( { {  4, 30 }, {  7, 59 } },
                        { {  4,  0 }, {  7, 29 } } ) << '\n';
    cout << intersection( { { 23,  0 }, { 23, 58 } },
                        { { 22, 45 }, { 23, 59 } } ) << '\n';

    return 0;
}

#include "interval.h"

bool maior( time_of_day x, time_of_day y)
{
    bool r;

    if (x.h > y.h)
        r = true;
    
    if (x.h == y.h)
    {
        if (x.m > y.m)
            r = true;
        else
            r = false;
    } 

    if (x.h < y.h)
        r = false;

    return r;
}

interval intersection(interval a, interval b)
{
    interval c;

    if (a.start.h > b.start.h || (a.start.h == b.start.h && a.start.m > b.start.m))

    c.start = a.start

}
