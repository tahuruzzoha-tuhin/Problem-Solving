
/*==============================================*\
ID:      Tahuruzzoha_Tuhin

Name:    Md. Tahuruzzoha Tuhin
Study:   SUST, MATH27
Address: Sylhet, Bangladesh

 mail: tuhin.zoha@yahoo.com
 FB  : fb.com/tuhin.zoha

\*===============================================*/

#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <algorithm>

#define lld             long long
#define ull             unsigned long long
#define ld              long double
#define loop0(i,n)      for(i=0;i<n;i++)
#define loop1(i,n)      for(i=1;i<=n;i++)
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
    int x1=0,y1=0,x2=0,y2=0,s1=0,s2=0,n=0;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    s1= abs(x1-x2);
    s2= abs(y1-y2);
    n=max(s1,s2);
    cout << n << nl;
	return 0;
}
