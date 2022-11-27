#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,i;
long long v,a,b,x=1,y=1;
scanf("%d%lld",&n,&a);
b=a;
i=n-1;
while(i--)
{
    scanf("%lld",&v);
    if(v<a)
    {
        a=v;
        x=1;
    }
    else if(v==a)x++;
    if(v>b)
    {
        b=v;
        y=1;
    }
    else if(v==b)y++;
}
if(b-a)printf("%lld %lld",b-a,x*y);
else printf("0 %lld",((x)*(x-1))/2);
}
