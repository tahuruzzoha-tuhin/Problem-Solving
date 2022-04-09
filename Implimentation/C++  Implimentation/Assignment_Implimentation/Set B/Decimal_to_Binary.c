#include <stdio.h>
#include <conio.h>
 
long decTobin(long n);
int main() {
    long decimal;
    printf("Enter a decimal number\n");
    scanf("%ld", &decimal);
    printf("Binary number of %ld is %ld", decimal, decTobin(decimal));
     
 getch();
    return 0;
}
 
/* Function to convert a decinal number to binary number */
long decTobin(long n) {
    int remainder; 
 long binary = 0, i = 1;
  
    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}