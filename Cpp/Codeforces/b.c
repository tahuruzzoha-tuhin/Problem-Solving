#include<stdio.h>
int fibonacci( int n )
{
    if(n<=1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    for(int i=0; i<=number; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}

