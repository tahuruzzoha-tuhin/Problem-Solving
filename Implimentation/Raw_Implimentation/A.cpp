#include<stdio.h>
int main()
{
    double a,b,c,d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
        printf("%0.0lf %0.0lf %0.0lf\n",(b+c-a),(b+d-a),(c+d-a));
    else if(b>a&&b>c&&b>d)
        printf("%0.0lf %0.0lf %0.0lf\n",(a+c-b),(a+d-b),(c+d-b));
    else if(c>a&&c>b&&c>d)
        printf("%0.0lf %0.0lf %0.0lf\n",(a+b-c),(a+d-c),(b+d-c));
    else
        printf("%0.0lf %0.0lf %0.0lf\n",(a+b-d),(a+c-d),(b+c-d));


    return 0;
}