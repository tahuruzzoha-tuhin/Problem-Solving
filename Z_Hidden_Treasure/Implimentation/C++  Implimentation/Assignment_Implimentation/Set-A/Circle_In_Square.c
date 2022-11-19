#include<stdio.h>
#include<math.h>
main(){
	float radius, side, area_sq, area_cr, area_shd[100];
	int N, i,j;
	scanf("%d",&N);
	for(i = 0; i<N; i++){
	scanf("%f", &radius);
	side = 2*radius;
	area_sq = side*side;
	area_cr = radius*radius*2*acos(0);
	area_shd[i] = area_sq - area_cr;
	}
	for(j = 0; j<N; j++){
		printf("Case %d: %.2f\n", j+1, area_shd[j]);
	}
}
	