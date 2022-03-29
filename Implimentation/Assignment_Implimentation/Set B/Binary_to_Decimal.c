#include <stdio.h>
   main()
{
    int bin, dec = 0, base = 1, rem;
 
    printf("Enter a binary number \n");
    scanf("%d", &bin);
    while (bin > 0)
    {
        rem = bin % 10;
        dec = dec + rem * base;
        bin = bin / 10;
        base = base * 2;
    }
    printf("Decimal is = %d \n", dec);
}