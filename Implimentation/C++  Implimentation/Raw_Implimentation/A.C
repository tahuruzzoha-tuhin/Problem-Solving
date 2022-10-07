#include<stdio.h>
int main(int argc, char const *argv[])
{
	long long int h, o, d;
	while(scanf("%lld%lld",&h,&o)==2){
	if (h<o)
	{
		d=o-h;
	}
	else
	{
		d=h-o;
	}
	printf("%lld\n",d);
}
	return 0;
}