#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t, a, b, c, av, v, next;
    cin >> t;
    while(t--)
    {
        a=b=c=v=av=0;
        cin >> a >> b >> c;
        if(a==0)
        {
            if(b==0)
            {
                if(c==0)
                {
                    cout << "0" << endl;
                    goto next;
                }
                cout << "1" << endl;
            }
            cout << max(b+c/2, abs(b-c)/2) << endl;
        }
        else if(a==b || a==c || b==c)
        {
            if(a!=c)
            {
                av = a+c;
            }
            av = 3 + a;
        }
        else if(a==c)
        {
            if(a>b && a>c)
            {
                if(b>c) av = (a-c)/2;
            }
            else if(b>a && b>c)
            {
                if(a>c) av = (b-c)/2;
            }
            else
            {
                if(c>a && c>b)
                {
                    if(a>b) av = (c-b)/2;
                }
            }

        }

    }
    next:
    return 0;
}
