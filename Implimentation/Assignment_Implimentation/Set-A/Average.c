#include<stdio.h>
main(){
	int n,i;
	float numbers, sum=0, average;
	printf("How many numbers: \n");
	scanf("%d", &n);
	printf("Enter the numbers:\n");
	for(i =0; i<n; i++){
		scanf("%f", &numbers);
		sum = sum + numbers;
	}
	average = sum/n;
	printf("\nAverage = %.6f\n", average);
}