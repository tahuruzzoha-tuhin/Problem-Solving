#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n, p, k;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		{
			scanf("%d%d", &p, &k);
			printf("%d\n", p+k);
		}	
	return 0;
}