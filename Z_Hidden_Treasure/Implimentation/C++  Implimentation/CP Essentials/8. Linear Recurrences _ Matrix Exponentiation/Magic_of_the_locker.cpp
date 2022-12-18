#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod = 1e9+7;
int power(int a, int b)
{
    int res = 1;
    while(b)
    {
        if(b&1) 
        {
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return res;
}
int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if (n < 3)
        {
            cout << n << endl;
        }
        else if(n%3 == 0)
        {
            cout << power(3, n/3)%mod << endl;
        }
        else if(n%3 == 1)
        {
            int p = ((n-1)/3)-1;
            cout << (power(3, p)*4)%mod << endl;
        }
        else
        {
            int p = ((n-2)/3);
            cout << (power(3, p)*2)%mod << endl;
        }


    }
    return 0;
}