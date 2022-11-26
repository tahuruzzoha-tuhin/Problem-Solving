#include <stdio.h>
#include <math.h>

int cnt;
int odd(int k, int cnt);
int max(int n3[], int n);
int even(int k, int cnt)
{
	k/=2;
	cnt+=1;
	if(k==1) return cnt;
	else if (k%2==0) return even(k, cnt);
	else if (k%2!=0) return odd(k, cnt);
	return cnt;
}

int odd(int k, int cnt)

{
	k=k*3+1;
	cnt+=1;
	if(k==1) return cnt;
	else if (k%2==0) return even(k, cnt);
	else if (k%2!=0) return odd(k, cnt);
	return cnt;
}

int max(int n3[], int n)
{
	int m=n3[0];
	for (int i = 0; i < n; ++i)
		if (n3[i]>m)
			m=n3[i];
	return m;
}

int main()
{
	int a, b;
	while(scanf("%d%d",&a,&b)==2)
	{
		int cnt=1,n=0;
		n=abs(a-b)+1;
		int n3[n];
		for (int i = a, j = 0; (i <= b || j < n) ; ++i, ++j)
		{
			if (i%2==0)	 n3[j]=even(i, cnt);
			else if(i%2!=0) n3[j]=odd(i, cnt);
		}
		printf("%d %d %d\n",a,b,max(n3, n));
    }

	return 0;
}
