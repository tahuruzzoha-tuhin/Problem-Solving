#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int n, relevence[10], HighestPriority=0;
	char webLink[10][101];
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i)
	{
		for (int i = 0; i < 10; ++i)
		{
			scanf("%s %d", webLink[i], &relevence[i]);
			HighestPriority = (relevence[i] > HighestPriority) ?  relevence[i] : HighestPriority;
		}
		printf("Case #%d:\n",i );
		for (int i = 0; i < 10; ++i)
		{
			if(relevence[i] == HighestPriority) printf("%s\n",webLink[i] );
		}
	}

	return 0;
}