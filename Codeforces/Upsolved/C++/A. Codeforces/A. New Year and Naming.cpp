#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <algorithm>

#define lli             long long int
#define ull             unsigned long long
#define ld              long double
#define loop0(i,n)      for(int i=0;i<n;i++)
#define loop1(i,n)      for(int i=1;i<=n;i++)
#define nl              "\n"
#define lg(r,n)         (int)(log2(n)/log2(r))
#define sf1(a)          scanf("%d",&a)
#define sfl(a)          scanf("%lld",&a)
#define sfc(a)          scanf("%c",&a)
#define sf2(a,b)        scanf("%d %d",&a,&b)
#define sf2l(a,b)       scanf("%lld %lld",&a,&b)
#define sf3(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sf3l(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define mx1             110
#define mx2             1010
#define mx3             10010
#define mx4             100010
#define mx5             1000010
#define mx6             10000010
#define PI              3.14159265358979323846
#define E               2.71828182845904523536
using namespace std;

int main()
{
    long long int n, m, lup, kom;
    string istring[21], estring[21], vexi, mexi;
    cin >> n >> m;
    for(int i=0; i<n; ++i)
    {
        cin >> istring[i];
    }
    for(int j=0; j<m; ++j)
    {
        cin >> estring[j];
    }
    cin >> lup;
    while(lup--)
    {
        cin >> kom;
        kom--;
        vexi = istring[kom%n];
        mexi = estring[kom%m];
        cout << vexi << mexi << endl;
    }


    return 0;
}
