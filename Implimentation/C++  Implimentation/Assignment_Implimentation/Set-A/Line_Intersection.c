/* equation
a1x + b1 = c1
a2x + b2 = c2 */
#include<stdio.h>
main(){
    int N, a1,b1,c1,a2,b2,c2;
    float x[1000], y[1000];
printf("Enter a number: ");
scanf("%d", &N);
for(int i=0;i<N;++i){
    scanf("%d %d %d %d %d %d", &a1, &b1, &c1, &a2, &b2, &c2);
    if(((a1*b2) - (a2*b1)) == 0){
        printf("Two lines are parallel! Math error! \nEnter another please\n");
        i--;
    }
    else{
        x[i] = (float)((b2*c1)-(b1*c2))/((a1*b2) - (a2*b1));
        y[i] = (float)((a1*c2)-(a2*c1))/((a1*b2) - (a2*b1));
    }
}
for(int j=0; j<N; j++){
    printf("Case %d : x = %.3f\ty = %.3f\n", j+1, x[j], y[j]);
}
}
