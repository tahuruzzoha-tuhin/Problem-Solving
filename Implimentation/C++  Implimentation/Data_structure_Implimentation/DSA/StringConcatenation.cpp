#include <stdio.h>
#include <string.h>

int main () {
   char src[50], dest[50];

   strcpy(src,  "Big Brother");
   strcpy(dest, "Michael Jackson");

   strncat(dest, src, 15);

   printf("Final Concatenated string : |%s|", dest);
   
   return(0);
}