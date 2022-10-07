#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int n;
	double d, u, v,t1,t2,t3,s;
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i)
	{
		scanf("%lf %lf %lf", &d, &v, &u);
		if(v>=u) printf("Case %d: can't determine\n",i);
		else{
			 t1 = d/u;
			 s = sqrt((u+v)*(u-v));
			 t2 = d/s;
			 if(t1==t2) printf("Case %d: can't determine\n",i);
			 else printf("Case %d: %0.3lf\n",i,abs(t2-t1));
			
		}
	}
	return 0;
}	