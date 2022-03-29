/*==============================================*\
ID:      Tuhin.SUST

Name:    Md. Tahuruzzoha Tuhin
Study:   SUST, MATH27
Address: Sylhet, Bangladesh

 mail: tuhin.zoha@yahoo.com
 FB  : fb.com/tuhin.zoha
 
\*===============================================*/
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[6];
	while(scanf("%d",&a[0])==1)
	{
		int b[6], i, d=0, c=0;

		for (i = 1; i < 5; ++i)
		{
			scanf("%d",&a[i]);
		}
		for (i = 1; i < 5; ++i)
		{
			scanf("%d",&b[i]);
		}
		for (int i = 1; i < 5; ++i)
		{
			d=a[i]+b[i];
			if (d==1)
			{
				c=0;
				break;
			}
			else
			{
				c=1;
				break;
			}
		}

		if(c==0) printf("Y\n");
		else printf("N\n");
	}
		return 0;
	}























	#include<stdio.h>
int main()
{
    int a1,a2,a3,a4,a5,b1,b2,b3,b4,b5;
    while(scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5)==5)
    {
        scanf("%d %d %d %d %d",&b1,&b2,&b3,&b4,&b5);
        if(a1!=b1 && a2!=b2 &&a3!=b3 &&a4!=b4 &&a5!=b5)
            printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
