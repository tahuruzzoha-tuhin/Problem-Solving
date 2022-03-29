#include<stdio.h>
main(){
int i, a, b, sum = 0;
printf("Enter the first number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);
for( i = a; i<=b; i++){
sum = sum + i;
}
printf("Sum of all integer between %d & %d = %d",a,b, sum);
}
