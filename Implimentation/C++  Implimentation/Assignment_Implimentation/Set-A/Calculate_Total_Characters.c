#include<stdio.h>
#include<string.h>
main(){
int N, number[100];
char line[1000];
printf("How many lines: ");
scanf("%d", &N);
for(int i=0; i<=N; i++){
        gets(line);
        number[i] = strlen(line);
}
for(int j = 1; j<=N; j++){
    printf("Case %d : %d\n", j, number[j]);
}
}
