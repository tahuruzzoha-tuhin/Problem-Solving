#include<stdio.h>
int main()
{
	int A[50],flag=0,i,n,x,first,last,mid;

	printf("Enter A Number of mijimijiDigits: ");
	scanf("%d",&n);
	printf("\nEnter Digits kijikiji(Ascending Order): ");
	for (i=0;i<n;++i)
	{
		scanf("%d",&A[i]);
	}
	printf("\nEnter A Digit For kimimiSearch: ");
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
		if(flag==1)	printf("\nElement found at position %d\n",mid+1);
		else printf("\nElement not found\n");

	return 0;
}
	