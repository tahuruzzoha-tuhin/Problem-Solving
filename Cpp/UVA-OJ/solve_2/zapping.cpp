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


int main(int argc, char const *argv[])
{
	int n,n1,a,b,c;
	while(scanf("%d%d",&n,&n1)==2)
	{
		if(n==-1 && n1==-1) break;
		else if(n==0 && n1>50) 
		{
			a=100-n1;
			printf("%d\n",a );
		}
		else if(n==0 && n1<50) 
		{
			a=n1-n;
			printf("%d\n",a );
		}
		else if(n>50 && n1==0) 
		{
			a=100-n;
			printf("%d\n",a );
		}
		else if(n<50 && n1==0) 
		{
			a=n-n1;
			printf("%d\n",a );
		}
		else if(n<50 && n1<50 && n1!=0)
		{
			a=abs(n-n1);
			printf("%d\n",a );
		}
		else if(n>50 && n1>50 && n!=0)
		{
			a=abs(n-n1);
			printf("%d\n",a );
		}
		else if(n<=40 && n1>=90) 
		{
			a=n+(100-n1);
			if(abs(n-n1)<a) printf("%d\n",abs(n-n1) );
			else printf("%d\n",a );
		} 
		else if(n<=30 && n1>=80)
		{
			a=n+(100-n1);
			if(abs(n-n1)<a) printf("%d\n",abs(n-n1) );
			else printf("%d\n",a );
		} 
		else if(n<=20 && n1>=70) 
		{
			a=n+(100-n1);
			if(abs(n-n1)<a) printf("%d\n",abs(n-n1) );
			else printf("%d\n",a );
		} 
		else if(n<=10 && n1>=60)
		{
			a=n+(100-n1);
			if(abs(n-n1)<a) printf("%d\n",abs(n-n1) );
			else printf("%d\n",a );
		}
		else if(abs(n-n1)<50 && n<50 && n1>50) {
			printf("%d\n",abs(n-n1) );
		}
		else if(abs(n-n1)>50 && n>50 && n1<50){
			printf("%d\n",100-abs(n-n1) );
		}

	}
	return 0;
}