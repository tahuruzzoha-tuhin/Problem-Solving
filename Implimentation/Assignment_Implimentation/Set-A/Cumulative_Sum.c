#include<stdio.h>
main(){
	int n, i, sum = 0, number[1000];
	printf("How many number: \n");
	scanf("%d", &n);
	printf("Enter the numbers:\n");
	for(i=0; i<n; i++){
		scanf("%d", &number[i]);
	}
	printf("\n\nResult\n");
	for(i= 0; i<n; i++){
		sum = sum + number[i];
		printf("%d ", sum);
	}
	printf("%d", sum);
}
