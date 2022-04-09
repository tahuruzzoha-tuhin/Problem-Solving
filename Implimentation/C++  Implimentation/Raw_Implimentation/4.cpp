#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	int n;
	int k=0, i, x, flag = 0;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&x);
	for (int i = 1; i <= x; ++i)
	{
			if (x%i==0)
			{
				flag++;
			}
		}
		if (flag==3)
		{
			printf("YES\n");
		}
		else if(flag!=3){
			printf("NO\n");
		}
	
}
	return 0;
}