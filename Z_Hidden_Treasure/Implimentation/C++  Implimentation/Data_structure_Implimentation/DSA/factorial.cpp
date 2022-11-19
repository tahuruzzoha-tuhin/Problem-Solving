#include <stdio.h>
long long int multiplyNumbers(long long int n);

int main()
{
    long long int n;
    printf("\nEnter a positive integer: ");
    scanf("%lli", &n);
    printf("\nFactorial of %lli = %lli", n, multiplyNumbers(n));
    return 0;
}
long long int multiplyNumbers(long long int n)
{
    if (n >= 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}