#include<stdio.h>
#include<math.h>
int main()
{
    int i=0;
    int j=0;
    int p=5;
    int n = 123456;
    int digits[12]={};

    j=n;
    while(j)
    {
        digits[i]=j%10;
        j = j/10;
        i++;
    }

     printf("The digit of %d in the position %d is %d",n,p,digits[i-p]);
     return 0;
}