#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <algorithm>

#define lli             long long int
#define ull             unsigned long long
#define ld              long double
#define f0(i,n)         for(int i=0;i<n;i++)
#define f1(i,n)         for(int i=1;i<=n;i++)
#define nl              "\n"
#define lg(r,n)         (int)(log2(n)/log2(r))
#define sf1(a)          scanf("%d",&a)
#define sfl(a)          scanf("%lld",&a)
#define sfc(a)          scanf("%c",&a)
#define sf2(a,b)        scanf("%d %d",&a,&b)
#define sf2l(a,b)       scanf("%lld %lld",&a,&b)
#define sf3(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sf3l(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define mx1             100
#define mx2             20
#define mx3             10
#define mx4             5
#define mx5             1
#define mx6             10000010
#define PI              3.14159265358979323846
#define E               2.71828182845904523536
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli x1,x5,x10,x20,x100, x;
    cin >> x;
    x100 = x/mx1;
    x20 = (x-x100*mx1)/mx2;
    x10 = (x-x100*mx1-x20*mx2)/mx3;
    x5 = (x-x100*mx1-x20*mx2-x10*mx3)/mx4;
    x1 = x-x100*mx1-x20*mx2-x10*mx3-x5*mx4;

    cout << (x1+x5+x10+x20+x100) << endl;

    return 0;
}
