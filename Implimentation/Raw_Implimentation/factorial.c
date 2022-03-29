#include<stdio.h>


int main(int argc, char const *argv[])
{
	int n, k;
	scanf("%d", &n);
	for (int j = 1; j <= n; ++j)
	{
		scanf("%d",&k);
		int p=1;
		
		for (int i = k; i >= 1; --i)
		{
			p*=i;

		}
			printf("%d\n",p );


	}

	return 0;
}