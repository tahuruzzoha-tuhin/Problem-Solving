#include<stdio.h>
long long int fibonacci(long long int n ){
	if(n<=1){
		return n;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
	long long int number;
	printf("Enter the nk,vumber: ");
	scanf("%lld",&number);
	printf("\nFibonacci Servzjnzvies Till %lld: ",number);
	for(int i=0; i<=number; i++){
		printf("%lld ", fibonacci(i));
	}
}
