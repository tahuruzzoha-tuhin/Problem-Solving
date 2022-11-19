/*==============================================*\
ID:      Tuhin.SUST

Name:    Md. Tahuruzzoha Tuhin
Study:   SUST, MATH27
Address: Sylhet, Bangladesh

mail: tuhin.zoha@yahoo.com
FB  : fb.com/tuhin.zoha

\*===============================================*/
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <stack>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fstream>
#include <iomanip>


#define FF first
#define SS second
#define PB push_back
#define MP make_pair
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define II() ( { int a ; read(a) ; a; } )
#define LL() ( { Long a ; read(a) ; a; } )
#define DD() ({double a; scanf("%lf", &a); a;})
#define DB if(0) 
#define D(x) cout << #x " is " << x << endl
#define FI freopen ("input.txt", "r", stdin)
#define FO freopen ("output.txt", "w", stdout)

using namespace std;

typedef long long Long;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef pair<int, int> PII;
typedef vector<PII> VII;
typedef vector<string> VS;

template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }

//Fast Reader
template<class T>inline bool read(T &x){
int c=getchar();int sgn=1;
while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=getchar();}
for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0'; 
	x*=sgn; return ~c;
}

const int INF = 2000000009;
const int MX = 100005;
const double EPS = 1e-9;
const int MOD = 1000000007;

/**********************Code starts here*********************************/

/*int main()
{
	long long in1,in2;
	while(scanf("%lld %lld",&in1,&in2)==2 && in1>0 && in2>0)
	{

		long long ans=0,i;
		for(int i=in1;i<=in2;i++)
		{
			if(i%10>0 && i>0) ans+=i%10;
			else ans+=i/10;
		}
		printf("%lld\n", ans);
	}
	return 0;
}*/


long long ZeroToN(long long n) {
	if(n <= 0)
		return 0;
	long long ans = 0, i;
	while(n != 0) {
		ans += 45*(n/10);
		for(i = n/10*10+1; i <= n; i++)
			ans += i%10;
		n /= 10;
	}
	return ans;
}
int main() {
	long long p, q;
	while(scanf("%lld %lld", &p, &q) == 2) {
		if(p < 0 && q < 0)
			break;
		printf("%lld\n", ZeroToN(q)-ZeroToN(p-1));
	}
	return 0;
}