#include<stdio.h>

int main()
{
	int a[7] = {1, 7, 5, 3, 4, 6, 2};
	int n = 7; //index(0-6) number.
	int k=3; //index to be delete. 
	int i,j=k;
	
	printf("\nsbvkkj\n");
	for (int i = 0; i < n; ++i)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}	

	while(j<n){
		a[j-1]=a[j];
		j=j+1;
	}
	n=n-1;
	printf("\nahubvzk jnl\n");
	for (int i = 0; i < n; ++i)
	{
		printf("a[%d] = %d\n",i,a[i] );
	}
	return 0;
}