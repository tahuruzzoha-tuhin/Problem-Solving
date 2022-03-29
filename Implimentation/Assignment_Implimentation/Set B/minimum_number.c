#include<stdio.h>
int main(){
	int n,numbers, min = 0;
	printf("How many numbers?\n");
	scanf("%d",&n);
	scanf("%d", &min);
	for(int i=0; i<n-1;i++){
		scanf("%d", &numbers);
		if(numbers>min){
			continue;
		}
		else
		   min = numbers;
	}
	printf("Minimum number is : %d", min);
}
