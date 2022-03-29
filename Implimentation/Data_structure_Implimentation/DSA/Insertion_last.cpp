#include<stdio.h>

int main()
{
	int a[100]; // {1,2,3,4,5,6,7};
	int k=0; //index position of updating number.
	int n=0; //index (0-6) of array.
	int newnumber=0,i,j;
	printf("\nEnter Array Size: ");
	scanf("%d",&n);
	printf("\nEnter Argfchvjbknray Elements: ");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	printf("\nTravers Arrayggfv Elements:\n\n");
	for (int i = 0; i < n; ++i)
	{
		printf("A[%d] = %d\n",i,a[i] );  // Travers.
	}
	printf("\nAdd An Index Posivjbknlmtion of Array for Insertion(0 to %d): ",n);
	scanf("%d",&k);
	printf("\nInsert A Number : ");
	scanf("%d",&newnumber);
	j=n;	
	n=n+1;
	while(j>=k){
		a[j+1]=a[j];
		j=j-1;       
	}                 

	a[k]=newnumber;
	printf("\nTravers Inserted Array:\n\n");
	for (int i = 0; i < n; ++i)
	{
		printf("a[%d] = %d\n",i,a[i] ); 
	}
	return 0;
}