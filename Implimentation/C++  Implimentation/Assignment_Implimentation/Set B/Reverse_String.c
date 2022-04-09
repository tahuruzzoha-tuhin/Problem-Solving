#include<stdio.h>
main()
{
    int length,i;
    char string[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", &string);
    length = strlen(string);
    for(i=length-1; i>=0; i--)
    {
        if(string[i]!=' ')
            printf("%c", string[i]);
    }
}
