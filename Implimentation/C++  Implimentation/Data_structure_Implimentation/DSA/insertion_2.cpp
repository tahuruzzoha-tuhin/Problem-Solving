#include<stdio.h>

main() {
   int LA[] = {1,3,5,7,8};
   int item = 10, k = 2, n = 5;
   int i = 0, j;

    printf("The originahvjhbknll array elements are :\n");

   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }

   n = n + 1;  //extended size of array

 for (j=n; j>=k; j-=1){
      LA[j+1] = LA[j];
   }
   LA[k] = item;

   printf("The array elemcvjbknlments after insertion :\n");

   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }

   return 0;
}
