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
#define loop0(i,n)      for(lld i=0;i<n;i++)
#define loop0j(j,n)     for(lld j=0;j<n;j++)
#define loop1(i,n)      for(lld i=1;i<=n;i++)
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
lld a[mx6];
lld b[mx6];
void MS( lld low, lld high);
void MG(lld low, lld mid, lld high)
{
	lld l1, l2, i, j, k;
	for (l1 = low, l2 = mid+1, i = low; l1 <= mid && l2 <= high; i++)
	{
		if (a[l1] <= a[l2]) 
			b[i] = a[l1++];
		else 
			b[i] = a[l2++];
	}
	while(l1 <= mid) 
		b[i++] = a[l1++];
	while(l2 <= high) 
		b[i++] = a[l2++];
	for(i = low; i <= high; i++) 
		a[i] = b[i];
}
void MS( lld low, lld high)
{
	lld mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		MS(low, mid);
		MS(mid+1, high);
		MG(low, mid, high);
	}
	else return ;
}

int main()
{
	lld n=0, temp=0, x=0, q=0, p=0, y=0;
	bool swp = false;
	cin >> n >> x;
	y=x;
	loop1(i,n) 
	{
		cin >> a[i];
	}
	loop1(i,n)
	{
		if(x>1) 
		{
			q += a[i]*x;
			x-=1;
		}
		else if(x==1) q += a[i]*x;
	}
  	MS(0,n);
  	loop1(i,n)
	{
		if(y>1) 
		{
			p += a[i]*y;
			y-=1;
		}
		else if(y==1) p += a[i]*y;
	}
	cout << (p <= q? p:q) << nl;
	return 0;
}