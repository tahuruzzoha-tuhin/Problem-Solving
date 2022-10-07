#include <stdio.h>
int a[100];
int b[100];
void MS( int low, int high);
void MG(int low, int mid, int high);
void MG(int low, int mid, int high)
{
	int l1, l2, i, j, k;


	for (l1 = low, l2 = mid+1, i = low; l1 <= mid && l2 <= high; i++)
	{
		if (a[l1] <= a[l2]) 
			b[i] = a[l1++];
		else 
			b[i] = a[l2++];
	}
	while(l1 <= mid) 
		b[i++] = a[l1++];
	while(l2 <= high) 
		b[i++] = a[l2++];
	for(i = low; i <= high; i++) 
		a[i] = b[i];
}
void MS( int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		MS(low, mid);
		MS(mid+1, high);
		MG(low, mid, high);
	}
	else return ;
}
int main(int argc, char const *argv[])
{

	int n,m,k;
	printf("Enter A Number: ");
	scanf("%d",&n);
	printf("\nEnter %d Numbers: ",n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	MS(0,n);
	printf("\nSorted By Merge Sort: ");
	for (int k = 1; k <= n; ++k)
	{
		printf("%d ",a[k] );
	}

	
	return 0;
}