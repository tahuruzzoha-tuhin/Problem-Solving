#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i,n,num,D=0,max=0,p,q,r,a[100],b[100],s=-1,t;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	for( i=0;i<n;++i)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
		else
			continue;


	}
	int minmin=2;

	for (int j = 0; j < n-1; ++j)
	{
		if(a[j]>minmin){
			continue;
		}
		else
		   minmin = a[j];
	}
	printf("%d\n",max );
	printf("%d\n",minmin );

    D= (max+minmin)/2;
    printf("%d\n\n",D );


    for (int i = 0; i < n; ++i)
    {
    	b[i]=D;
	
    if(a[i]<b[i])  
    	{
    		 p=b[i]-a[i];
    		 t=b[i+1]-a[i+1];
    			
    	}
   
    if(a[i]>b[i]) 
    	{
			 r=a[i]-b[i];
			
	    }
	
    }
    if(p==r) 
    	{
    	  printf("%d\n", p);
        }

    
	
	if(p!=r && p!=D) 
	{
		for (int i = 0; i < n; ++i)
    {
    	b[i]=max;

       if(a[i]<b[i])  
    	{
    		 q=b[i]-a[i];
    			
    	}
    	

	}
	printf("%d\n",q);
	}
	
		
	return 0;
}

