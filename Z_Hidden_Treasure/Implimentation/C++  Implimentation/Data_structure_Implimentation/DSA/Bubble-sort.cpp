#include<stdio.h>
int main()

{

    int numbers[100]; //[10]={3,6,5,4,7,1,2,9,8,0};
    int i,j,temp,n,k;
    bool swp = false;
    printf("Enter Numbergihiof Digits: ");
    scanf("%d",&n);
    printf("Enter Digitkinis: ");
    for(i = 0; i < n; ++i){
        scanf("%d",&numbers[i]);

    }

    for(k=0; k < n-1; ++k){
        swp = false;
        for(j=0; j < n-k-1; ++j){
            if(numbers[j] > numbers[j+1]){

                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
                swp = true;
            }
        }
    }
    printf("Sorted Digitskkkk: ");
        for(i = 0; i<n; ++i)
            printf("%d ",numbers[i]);
    }
