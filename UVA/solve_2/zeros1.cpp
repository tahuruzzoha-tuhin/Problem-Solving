#include<iostream>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	long t,n=1,a,b,c,d,i,j;
	char s[10000];
	while(scanf("%s",s)==1)
	{
		t=strlen(s);
		if(t==0) break;
		scanf("%ld",&a);
		for (i = 0; i < a; ++i)
		{
			scanf("%ld%ld",&b,&c);
			if(i==0) printf("Case %ld:\n",n );
			if (b>c)
			{
				d=b;
				b=c;
				c=d;
			}
			for (j = b; j < c; ++j)
			{
				if (s[j]!=s[j+1])
				{
					printf("NO\n");
					break;
				}

			}
			if (j==c)
			{
				printf("YES\n");
			}


		}
		n++;
	}
	return 0;
}