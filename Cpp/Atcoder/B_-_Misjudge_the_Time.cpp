/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <iostream>
using namespace std;



void Accepted();



bool check(int h, int m)
{
    int a = (h/10)%10;
    int b = h%10;
    int c = (m/10)%10;
    int d = m%10;

    int misH = 10*a+c;
    int misM = 10*b+d;

    if(misH <= 23 && misM <= 59)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int test_kase = 1;
    // cin >> test_kase;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    int  h = 0, m = 0, res = 0;
    cin >> h >> m;

    while( 0 <= h && h<= 23)
    {
        while(0 <= m && h <= 59)
        {
            int res = check(h, m);

            if(res)
            {
                cout << h << " " << m << endl;
                return;
            }
            m += 1;
            if(m >= 60)
            {
                m = 0;
                break;
            }

        }
        
        h += 1;
        if(h >= 24)
        {
            h = 0;
        }
    }
}
