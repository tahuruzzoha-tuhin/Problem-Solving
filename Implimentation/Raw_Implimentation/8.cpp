#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	long long int a,b;
	while(scanf("%lld%lld",&a,&b)!=EOF)
	{
		printf("%lld\n",abs(b-a) );
	}
	return 0;
}