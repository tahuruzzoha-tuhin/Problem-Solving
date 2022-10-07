
// Problem : A. Two Regular Polygons
// Contest : Educational Codeforces Round 83 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1312/problem/A
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<stdio.h>
int main()
{
	int t , n, m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		if(n%m==0) 
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}