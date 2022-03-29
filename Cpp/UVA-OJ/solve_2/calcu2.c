#include<stdio.h>

int bits[10];

int HighNBits(int n,int k){
	if(!k){
		return 0;
	}
	long long s = (long long)k * k;
	int index = 0;

	while(s > 0){
		bits[index++] = s % 10;
		s /= 10;
	}
 
	if(n > index){
		n = index;
	}

	int result = 0;
	for(int i = 0;i <n;i++){
		result = result * 10 + bits[--index];
	}
	return result;
}

int main(){
	int T,i,j,n,k;
	scanf("%d",&T);

	while(T--){
		scanf("%d %d",&n,&k);
		int max = k;
		int k1 = k,k2 = k;
		do{

			k1 = HighNBits(n,k1);

			k2 = HighNBits(n,k2);
			if(k2 > max){
				max = k2;
			}

			k2 = HighNBits(n,k2);
			if(k2 > max){
				max = k2;
			}
        }while(k1 != k2);
        printf("%d\n",max);
    }
    return 0;
}