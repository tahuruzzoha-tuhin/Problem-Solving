#include<stdio.h>

int main(int argc, char const *argv[])
{
	char s1[10][10];
	int inc,count=0,x=0;
	for (int i = 0; i < 8; ++i)
	{
		scanf("%s",s1[i]); inc=0;
		for (int j = 0; j < 8; ++j)
			if ( s1[i][j]=='B' )inc++;
		if (inc==8) count++;
		else x=inc;
    }
    count+=x;
    printf("%d\n",count);
	return 0;
}