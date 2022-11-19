#include<stdio.h>
main(){
    int N, area[1000], L,W,H;
    printf("How much area to calculate: ");
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d %d %d", &L, &W, &H);
        area[i] = L*W+W*H+H*L;
    }
    printf("\n\n");
    for(int j=0;j<N;j++)
        printf("Case %d : Area = %d\n", j+1, area[j]);
}
