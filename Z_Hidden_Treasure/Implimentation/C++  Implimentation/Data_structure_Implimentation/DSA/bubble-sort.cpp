#include<stdio.h>
int main()
{
	int A[100],i,j,n,temp=0;
	printf("\nEnter array inknkldex:\n");
	scanf("%d",&n);
	printf("\nEnter arraprny elements:\n");

	for(i=0;i<n;++i)
	{
		scanf("%d",&A[i]);
	}

	for(i=0;i<n-1;++i)
	{
		for(j=0;j<n-i-1;++j){
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("\nSorted Elemkbsbnts:\n\n");
	for(i=0;i<n;++i){
		printf("%d\n",A[i]);
	}

	return 0;
}