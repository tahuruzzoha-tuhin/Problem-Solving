#include<iostream>
#include<algorithm>
using namespace std;

int getMax(int array[], int size) {
   int max = array[1];
   for(int i = 2; i<=size; i++) {
      if(array[i] > max)
         max = array[i];
   }

   return max; 
}

void countSort(int *array, int size) {
   int output[size+1];
   int max = getMax(array, size);
   int count[max+1]; 

   for(int i = 0; i<=max; i++)
      count[i] = 0; 
   for(int i = 1; i <=size; i++)
      count[array[i]]++; 
   for(int i = 1; i<=max; i++)
      count[i] += count[i-1]; 
   for(int i = size; i>=1; i--) {
      output[count[array[i]]] = array[i];
      count[array[i]] -= 1; 
   }

   for(int i = 1; i<=size; i++) {
      array[i] = output[i]; 
   }
}

int main() {
   int n=10,T,flag;
   cin >> T;
   cout << "Lumberjacks:" << endl;
   while(T--)
   {
      int arr[n+1],brr[n+1],crr[n+1]; 
      for(int i = 1; i<=n; i++) {
         cin >> arr[i];
         brr[i]=arr[i];
      }

      countSort(arr, n);
      for (int i = 1; i <= n; ++i)
      {
         crr[i]=arr[n-i+1];
      }

      for (int i = 1; i <= n; ++i)
      {
         if (arr[i]==brr[i] || crr[i]==brr[i]) flag=0;
         else flag=1;
      }
      if(flag==0) cout << "Ordered" << endl;
      else cout << "Unordered" << endl;
   }
   return 0;
}