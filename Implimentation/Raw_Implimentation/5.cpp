#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n, sum = 0;
	scanf("%d",&n);
	int a[n];
	for (int i = 1; i <= n; ++i)
	{
		scanf("%d",&a[i]);
		if (a[i+1]<0)
		{
			sum+=a[i]*i;
		}
		else if(a[i+4]<0){
			sum+=a[i]*i;
		}
		else if(a[i+9]<0){
			sum+=a[i]*i;
		}
		else if(a[i+14]<0){
			sum+=a[i]*i;
		}


		else {
			sum+=a[i]*i;
		}

	}
	printf("%d\n",sum );
	return 0;
}