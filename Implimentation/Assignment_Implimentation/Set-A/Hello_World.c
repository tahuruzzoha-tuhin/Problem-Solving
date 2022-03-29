#include<stdio.h>
main(){
    int N;
    scanf("%d", &N);
    char name[N][20];
    for(int i=0; i<N; i++){
        scanf("%s", &name[i]);
    }
    for(int i=0; i<N; i++){
        printf("Case %d: Hello %s\n", i+1, name[i]);
    }
}
