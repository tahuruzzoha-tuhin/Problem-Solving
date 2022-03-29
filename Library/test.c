#include<stdio.h>

int main()
{                              //Data Types                                  //Format Specifier
    int number1 = 500;  //Data types -> Integer                                  %d
    float number2 = 5.6; // Floating                                             %f
    double number3 = 7.66668; //Double -> long floating                          %lf
    char c = 'A'; // character                                                   %c

    printf("%d\n", number1);
    printf("%f\n", number2);
    printf("%c", c);
    return 0;
}
