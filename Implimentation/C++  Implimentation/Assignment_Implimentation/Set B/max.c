#include<stdio.h>
main(){
	int n,numbers, max = 0;
	printf("How many numbers?\n");
	scanf("%d",&n);
	for(int i=0; i<n;i++){
		scanf("%d", &numbers);
		if(numbers>max){
			max = numbers;
		}
		else
		continue;
	}
	printf("Maximum number is : %d", max);
}