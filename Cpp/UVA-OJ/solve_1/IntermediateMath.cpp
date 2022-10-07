#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	long long a,b;
	while(scanf("%lld%lld",&a,&b)==2)  printf("%lld\n", abs(a-b) );;
	return 0;
}