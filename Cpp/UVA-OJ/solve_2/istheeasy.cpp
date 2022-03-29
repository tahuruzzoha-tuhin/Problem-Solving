#include<stdio.h>
int main(int argc, char const *argv[])
{
	long long int n,a,b,c;
	scanf("%lld",&n);
	if(n<20)
	{
	for (int i = 1; i <= n; ++i)
	{
		scanf("%lld %lld %lld", &a, &b, &c);
		if(a+b>c && a+c>b && b+c>a)
		{
			if(a==b && b==c && a==c) printf("Case %d: Equilateral\n",i );
			else if(a==b || b==c || a==c) printf("Case %d: Isosceles\n",i );
			else printf("Case %d: Scalene\n",i );
		}
		else printf("Case %d: Invalid\n",i );
	}
	}
	return 0;
}