#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c,d,x,y,z;
	while(scanf("%d %d %d %d", &a, &b, &c, &d)==4)
	{
		if(a==0 && b==0 && c==0 && d==0) break;
		if(a<b) x=40-(b-a);
		else x=a-b;
		if(b>c) y=40-(b-c);
		else y=c-b;
		if(c<d) z=40-(d-c);
		else z=c-d;

		printf("%d\n",360*3+(x+y+z)*9 );
	}
	return 0;
}