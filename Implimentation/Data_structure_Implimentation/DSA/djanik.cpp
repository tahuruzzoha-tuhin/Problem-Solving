#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
        printf("%lld %lld %lld\n",(b+c-a),(b+d-a),(c+d-a));
    else if(b>a&&b>c&&b>d)
        printf("%lld %lld %lld\n",(a+c-b),(a+d-b),(c+d-b));
    else if(c>a&&c>b&&c>d)
        printf("%lld %lld %lld\n",(a+b-c),(a+d-c),(b+d-c));
    else
        printf("%lld %lld %lld\n",(a+b-d),(a+c-d),(b+c-d));



    return 0;
}