#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, p, q, t, r, s, x, y;
    cin >> t;
    for(int i=0; i<t; ++i)
    {
        int maxi = 0;
        cin >> a >> b >> x >> y;

        p = (a)*y;
        q = (a)*(b-y-1);
        r = (b)*x;
        s = (b)*(a-x-1);

        maxi = max(max(p,q), max(r,s));
        cout << maxi << endl;
    }
    return 0;

}
