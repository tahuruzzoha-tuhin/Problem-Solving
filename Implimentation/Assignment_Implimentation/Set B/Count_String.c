#include <stdio.h>

int main()
{
    char string[1000];
    int i, vowels, consonants, digits, length, total;
    float vowel_parcent, consonant_parcent, digit_parcent;
    vowels =  consonants = digits  = 0;

    printf("Enter a string:\n");
    scanf("%[^\n]", string);
    length = strlen(string);
    for(i=0; i<length; i++)
    {
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' ||
           string[i]=='o' || string[i]=='u' || string[i]=='A' ||
           string[i]=='E' || string[i]=='I' || string[i]=='O' ||
           string[i]=='U')
        {
            vowels++;
        }
        else if((string[i]>='a'&& string[i]<='z') || (string[i]>='A'&& string[i]<='Z'))
        {
            consonants++;
        }
        else if(string[i]>='0' && string[i]<='9')
        {
            digits++;
        }
    }
    total = vowels+consonants+digits;
    vowel_parcent = (vowels*100/total);
    consonant_parcent = (consonants*100/total);
    digit_parcent = (digits*100/total);
    printf("\nVowel = %.2f%%", vowel_parcent);
    printf("\nConsonant = %.2f%%", consonant_parcent);
    printf("\nDigit = %.2f%%\n", digit_parcent);
    return 0;
}