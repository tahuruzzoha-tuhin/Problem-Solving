#include <stdio.h>
long int multiplyNumbers(int n);

int main()
{
    int n;
    printf("\nEnter a positive integer: ");
    scanf("%d", &n);
    printf("\nFactorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
    if (n >= 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}