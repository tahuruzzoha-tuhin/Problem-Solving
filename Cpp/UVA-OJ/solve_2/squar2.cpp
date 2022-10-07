#include <stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	double a=0;
	int c=0,d=0,b=0,e=0;
	int i,q;
	while(scanf("%d%d",&d,&c)==2){

	for (int i = 1; i <= abs(c-d); ++i)
	{
		a=sqrt(i);
		
		 q=(int)a;
        ++q;

    if((q - a) != 1)
    {

        e++;
        //printf("\nThe number is not an integer\n\n");
    }
    else
        b++;
        //printf("\nThe number is an integer\n\n");
	
	}
	printf("%d\n",b );
	d=0;
	b=0;
	c=0;
   }
	return 0;
}
