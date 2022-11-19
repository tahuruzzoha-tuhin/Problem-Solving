#include<stdio.h>    
int main()    
{    
    int n, sum=0, count = 0;
    scanf("%d", &n);
    // for(int i=1; i<=n; i++)
    // {
    //     sum += i*i*i;
    // }
    // printf("%d\n", sum);

    // for(int i=1; i<=n; i++)
    // { // Even series Summation
    //     if(i%2 == 0)
    //     {
    //         sum += i;
    //     }
    // }

    // for(int i=2; i<=n; i+=2)
    // {    // Even series Summation

    //     sum += i;

    // }
    
    // for(int i=1; i<=n; i++)
    // {   // Odd series summation
    //     if(i%2 != 0)
    //     {
    //         sum += i;
    //     }
    // }

    // for(int i=1; i<=n; i+=2)
    // {
    //     //odd series Summation
    //     sum += i;

    // }

    for(int i=1 ;; i++)
    {
        if(count >= n)
        {
            break;
        }
        else if(i%2 != 0)
        {
            sum = sum + i;
            count = count + 1;
        }

        // printf("Sum: %d \n Count: %d \n", sum,count);
    }
    printf("%d\n", sum);
    
    return 0;  
}    