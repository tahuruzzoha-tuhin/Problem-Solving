#include<stdio.h>
int fibonacci( int n ){
if(n<=1){
	return n;
}
return fibonacci(n-1) + fibonacci(n-2);
}
main(){
int number;
printf("Enter the number: \n");
scanf("%d",&number);
printf("\n\n%dth fibonacci number is %d\n", number, fibonacci(number));
}
