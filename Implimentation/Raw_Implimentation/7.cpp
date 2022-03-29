#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	long long x, y;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%lld%lld",&x,&y);
		if (x>y)
		{
			printf(">\n");
		}
		else if (x<y)
		{
			printf("<\n");
		}
		else
		{
			printf("=\n");
		}
	}
	return 0;
}