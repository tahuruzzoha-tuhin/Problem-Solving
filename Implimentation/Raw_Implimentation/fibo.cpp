#include<stdio.h>
int fibo(int s)
{
    if(s==0 || s==1) return s;
    else return fibo(s-1)+fibo(s-2);
}


int main()

{

    int j,k;
    scanf("%d",&k);
    for(j=0;j<k;j++)
        printf("%d ",fibo(j));

    return 0;
}
