#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[10],n,i,k,j,l,h,temp,t;
	scanf("%d",&n);
	int g=n;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}

for(i=0;i<n-1;++i)
	{
		for(j=0;j<n-i-1;++j){
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}for (t = 0; t < n; ++t)
	{
		printf(" %d\n",a[t] );
	}
	
    for ( i = 0; i < n; ++i)
    {
    	
    	for (j = i+1; j < n; ++j)
    	{
    		if(a[i]==a[j]);
        	{
        		a[k]=i;
        	    a[h]=j;
          	}

    }
}
       printf("%d\n",h );
//increasing
       for (int p = 0; p < i; ++p)
       {
           printf("\n%d",a[p]);
       }
		
		printf("\n");
	    for (i = n; i<=n; i++)
		{
			 printf(" %d", a[i]);

		}
		printf("\n");


   


	return 0;
}