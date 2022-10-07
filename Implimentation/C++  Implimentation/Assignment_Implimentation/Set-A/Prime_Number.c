#include<stdio.h>
int main(){
    int N, number[10000];
    printf("How much number:\n");
    scanf("%d",&N);
for(int i = 0; i<N ; i++){
    scanf("%d", &number[i]);
}
    printf("\n\nResult");
for(int j = 0; j<N; j++){
        int count = 0;
    for(int k =1; k<=number[j]/2;k++ ){
        if(number[j]%k==0)
            count++;
        else
            continue;
    }
    if(count==1){
        printf("\nCase %d : Yes\n", j+1);
    }
    else{
        printf("\nCase %d : No\n", j+1);
    }
}

}


