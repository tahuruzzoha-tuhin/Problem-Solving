#include<stdio.h>
main(){
	float number;
	int round;
	printf("Enter a number\n");
	scanf("%f", &number);
if (number-(int)number == 0){
	round = number;
    printf("The round value is %d", round);
}
else{
	float fraction = number - (int)number;
	if(fraction >=.5){
		round = (int)(number+1);
	}
	else
	round = (int) number;
	printf("The nearest round value is %d", round);
}
}