#include<stdio.h>
main(){
int n, length, number[100], count;
scanf("%d", &n);
char word[30];
for(int i=0; i<n; i++){
    scanf("%s", &word);
    length = strlen(word);
    for(int j =0, k = length; j<=length/2; j++, k--){
        if(word[j]!=word[k-1]){
            count = 0;
            break;
        }
        else{
            count = 1;
        }

    }
    number[i] = count;
}
for(int l=0; l<n; l++){
    if(number[l]==0){
        printf("Case %d : No", l+1);
    }
    else
        printf("Case %d : Yes", l+1);
    printf("\n");
}
}


