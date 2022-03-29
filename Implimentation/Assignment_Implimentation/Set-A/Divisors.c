#include<stdio.h>
int main(){
    int number;
for(int i = 0; ; i++){
    scanf("%d", &number);
    if(number==0)
    break;
    printf("\nDivisors of %d : ", number);
    for(int j = 1; j<=number; j++){
            if(number%j==0){
                printf("%d ",j);
            }
            else
                continue;
}
printf("\n");
}
}

