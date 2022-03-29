#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a[100];
	int n,k,m;
	printf("\nEnter A Number: ");
	scanf("%d",&n);
	printf("\nEnter %d Numbers: ",n );
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	for(int j = 1; j <= n-1; ++j)
	{
		k = j;

		while(k >= 0 && a[k] > a[k-1])
		{
			m = a[k];
			a[k] = a[k-1];
			a[k-1] = m;
			k--;
		}
	}
	printf("\nSorted By Insertion Sort: ");
	for(int l = n-1; l >= 0; --l)
	{
		printf("%d ",a[l] );
	}
	return 0;
}