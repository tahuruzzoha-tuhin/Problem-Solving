
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
    int a,b,s=0,p,q,r;

    string a0="ABCDEF";  int b0= a0.length();
    string a1="FE";      int b1= a1.length();
    string a2="EBGAD";   int b2= a2.length();
    string a3="CBGAD";   int b3= a3.length();
    string a4="FGBC";    int b4= a4.length();
    string a5="AFGCD";   int b5= a5.length();
    string a6="AFEDCG";  int b6= a6.length();
    string a7="ABC";     int b7= a7.length();
    string a8="ABCDEFG"; int b8= a8.length();
    string a9="GFABCD";  int b9= a9.length();
    int d[10]={b0, b1, b2, b3, b4, b5, b6, b7, b8, b9};
    for(cin>>a>>b; b/a ; a++)
        for(int k=a;k;k/=10)
            s+=d[k%10];
    cout << s;
	return 0;
}
