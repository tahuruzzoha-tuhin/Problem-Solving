#include <stdio.h>
 int main()
{
  int array[100],n,c,d,position,swap;
  printf("\nEnter A Number : ");
  scanf("%d", &n);
  printf("\nEnter %d Numbers: ",n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 0; c < (n - 1); c++)
  {
    position = c;
   
    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }
    if (position != c)
    {
      swap = array[c];
      array[c] = array[position];
      array[position] = swap;
    }
  }
 
  printf("\nSorted By Selection Sort: ");
 
  for (c = 0; c < n; c++)
    printf("%d ", array[c]);
 
  return 0;
}