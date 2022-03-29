#include<stdio.h>
int main()
{
	for (int i = 0; i < 50; ++i)
	{
		if (i%3==0)
			continue;
			printf("%d\n",i );
		if(i==10)
			break;
	}
}