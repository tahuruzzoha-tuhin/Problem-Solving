#include<stdio.h>
int main()
{
	int a[10000],n,e=0;
	while(scanf("%d",&n)==1)
	{	
		int b=0,c=0,d=0;
		if(n==0) break;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
			if(a[i]==0) b++;
		}
		c=n-b;
		d=c-b;
		e++;
		printf("Case %d: %d\n",e,d );
	}
	return 0;
}