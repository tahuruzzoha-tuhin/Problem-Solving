#include<stdio.h>
int main()
{
	int A[50],flag=0,i,n,x,first,last,mid;

	printf("Enter A Number : ");
	scanf("%d",&n);
	printf("\nEnter %d Numbers (Ascending Order): ",n);
	for (i=0;i<n;++i)
	{
		scanf("%d",&A[i]);
	}
	printf("\nSearching A Number By Binary Search: ");
	scanf("%d",&x);

		 first=0;
		 last=n-1;
	while(first<=last){

		 mid=(first+last)/2; 

		if(A[mid]==x){
				flag=1;
				break;
		} 
		else
			if(A[mid]<x) first=mid+1;
			else last=mid-1; 
		
	}
		if(flag==1)	printf("\nNumber found at position %d\n",mid+1);
		else printf("\nNumber not found\n");

	return 0;
}
	