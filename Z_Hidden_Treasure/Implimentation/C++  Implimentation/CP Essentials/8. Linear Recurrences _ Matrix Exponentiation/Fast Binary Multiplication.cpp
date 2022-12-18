#include<bits/stdc++.h>
using namespace std;
#define int    long long int


int multiply(int a, int b, int c)
{
    int res = 0;
    while(b)
    {
        if(b&1)
        {
            res += a;
            res %= c;
        }
        a += a;
        a %= c;
        b /= 2;
    }
    return res;
}
int32_t main()
{
    int a = 1e10+7, b = 1e10+7, c = 1e9+7;
    int ans = multiply(a, b, c);
    cout << ans << endl;
    return 0;
}