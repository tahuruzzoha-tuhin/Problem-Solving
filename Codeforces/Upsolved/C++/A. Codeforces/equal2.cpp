#include<stdio.h>
int main(int argc, char const *argv[])
{
	int A[100],b[100],i,j,n,m,s=-1,temp=0,k;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&A[i]);
	}






//*******************************************************************************




	

	

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
	//printf("\nSorted Elements:\n\n");
	for(k=0;k<n;++k){

		for(l=0;l<n;l++)

			if(A[k]==A[l])
			
			A[k]=A[k+1];
			A[k+1]=A[k+2];


		printf("%d\n",A[k]);
	}

}














	/*if(n>3){
		printf("%d\n",s );
	}
	else{
		if()
	}
*/
