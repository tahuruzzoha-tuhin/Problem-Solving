/*==============================================*\
ID:      Tahuruzzoha_Tuhin

Name:    Md. Tahuruzzoha Tuhin
Study:   SUST, MATH27
Address: Sylhet, Bangladesh

 mail: tuhin.zoha@yahoo.com
 FB  : fb.com/tuhin.zoha
 
\*===============================================*/

#include<iostream>
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
#define sf(a)           scanf("%d",&a)
#define sfl(a)          scanf("%lld",&a)
#define sfc(a)          scanf("%c",&a)
#define sff(a,b)        scanf("%d %d",&a,&b)
#define sffl(a,b)       scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)     scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)    scanf("%lld %lld %lld",&a,&b,&c)
#define mx1             110
#define mx2             1010
#define mx3             10010
#define mx4             100010
#define mx5             1000010
#define mx6             10000010
#define PI              3.14159265358979323846
#define E               2.71828182845904523536
using namespace std;

int AmArShoMadhAaN()
{


	long double x1, x2, a, b, c, temp=0;
	cin >> a >> b >> c;
	temp = b*b-4*a*c;
	if(temp < 0) temp *= -1;
		else temp *= 1; 
			x1=(-b+sqrt(temp))/(2*a);
			x2=(-b-sqrt(temp))/(2*a);
	if(x1 > x2)
		 cout << fixed << setprecision(10) << x1 << endl << x2;
	if(x2 > x1) 
		 cout << fixed << setprecision(10) << x2 << endl << x1;
}

int main(int argc, char const *argv[])
{
	AmArShoMadhAaN();
	return 0;
}