#include <stdio.h>
int main()
{
    int i, j, count,number,c =0;
printf("Enter the number:\n");
scanf("%d",&number);
for(j= 2;; j++)
    {
        count = 0;
        for (i = 2; i <= j/2; i++)
    {
    if(j%i == 0)
        {
            count++;
            break;
}
}
if(count == 0){
        printf("%d ", j);
        c++;
}
if(c==number){
	break;
}
}
printf("\n%dth prime number is %d", number,j);
return 0;
}
