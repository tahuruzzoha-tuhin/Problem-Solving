#include<stdio.h>
int main(int argc, char const *argv[])
{
	long long int n, x, y, p;
	scanf("%lld", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%lld%lld",&x, &y);
		if (x>0)p=x-y;
		else p=y-x;
		if (p==1)
		{
			printf("NO\n");
		}
		else printf("YES\n");

	}
	return 0;
}