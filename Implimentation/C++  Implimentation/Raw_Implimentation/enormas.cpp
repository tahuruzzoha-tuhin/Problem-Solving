#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n, k, p=0, q=0;
	scanf("%d%d",&n,&k);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&q);
		if (q%k==0)
		{
			p++;
		}
	}
	printf("%d\n",p );
	return 0;
}