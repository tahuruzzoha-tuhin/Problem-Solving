#include<stdio.h>
/*int main(int argc, char const *argv[])
{
	int n,i=1;
	scanf("%d",&n);
	for(;;){
		printf("%d X %d = %d\n",i,n,n*i );
		i++;
		if(i>10) break;
	}
	return 0;
}*/

/*int main(int argc, char const *argv[])
{
	int m,n=0;
	scanf("%d",&m);
	for(int i=1;i<=10;i++){
		n+=m;
		printf("%d X %d = %d\n",i,m,n );
	}
	return 0;
}*/
int main(int argc, char const *argv[])
{
	int n,i;
	for(n=1;n<=20;n++){
		for (int i = 1; i <=10; ++i)
		{
			printf("%d X %d = %d\n",n,i,n*i );
		}
	}
	return 0;
}