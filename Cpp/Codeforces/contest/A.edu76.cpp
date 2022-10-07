#include<bits/stdc++.h>

using namespace std;
int main()

{
    int n;
    cin >> n;
 
    for (int i = 0; i < n; ++i)
    {
            
    int n, x, a, b;
    cin >> n>> x >> a >> b;
    if( a > b ) swap(a,b);
        while( a > 1 && x > 0 )
        {
            a--;
            x--;
       			 }
        			while( b < n && x > 0)
        			{
           				b++;
            			x--;
       				 }
        	cout << b-a << endl;
        }
        return 0;
    }