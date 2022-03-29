#include<stdio.h>

int main(int argc, char const *argv[])
{
	int t,n[100],a,b=0,c=0,d=0;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%d",&a);
		d=(a-1)/2;

		for (int i = 0; i < a; ++i)
		{
			scanf("%d",&n[i]);
		}
			printf("Case %d: %d\n",i+1,n[d] );
	}


	return 0;
}

