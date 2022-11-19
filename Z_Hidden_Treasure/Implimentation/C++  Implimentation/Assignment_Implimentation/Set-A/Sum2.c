#include<stdio.h>
main(){
    int N, sum=0, number;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &number);
        sum = sum + number;
    }
    printf("\n%d", sum);
}
