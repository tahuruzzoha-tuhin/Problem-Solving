#include<stdio.h>
main(){
	float number;
	int floor, ceil;
	printf("Enter a number to check its Floor & Ceil\n");
	scanf("%f", &number);
if (number-(int)number == 0){
	floor = number;
	ceil = number;
    printf("Floor = %d\nCeil = %d", floor, ceil);
}
else{
	floor = (int)number;
	ceil = (int)(number+1);
	printf("Floor = %d\nCeil = %d", floor, ceil);
}
}