#include<stdio.h>

int main()
{
	int A[100]; // {1,2,3,4,5,6,7};
	int k=0; //index position of updating number.
	int n=0; //index (0-6) of array.
	int newnumber=0;
	printf("\nEnter Array Size: ");
	scanf("%d",&n);
	printf("\nEnter Array Elements: ");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&A[i]);
	}
	printf("\nTravers Array Elements:\n\n");
	for (int i = 0; i < n; ++i)
	{
		printf("A[%d] = %d\n",i,A[i] );  // Travers.
	}
	printf("\nEnter An Index Position of Array for Update: ");
	scanf("%d",&k);
	printf("\nEnter A Number for Update: ");
	scanf("%d",&newnumber);
	A[k]=newnumber;
	printf("\nTravers Updated Array: \n\n");
	for (int i = 0; i < n; ++i)
	{
		printf("A[%d] = %d\n",i,A[i]); // Travers.
	}
	return 0;
}