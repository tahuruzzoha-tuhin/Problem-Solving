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


int bits[10];
//The interception of K square high N
int HighNBits(int n,int k){
	if(!k){
		return 0;
	}
	long long s = (long long)k * k;
	int index = 0;
    //The separation of s you
	while(s > 0){
		bits[index++] = s % 10;
		s /= 10;
	}
    //Not enough n
	if(n > index){
		n = index;
	}
    //High N
	int result = 0;
	for(int i = 0;i <n;i++){
		result = result * 10 + bits[--index];
	}
	return result;
}

int main(){
	int T,i,j,n,k;
	scanf("%d",&T);
    //T group of test data
	while(T--){
		scanf("%d %d",&n,&k);
		int max = k;
		int k1 = k,k2 = k;
		do{
            //The 1 children
			k1 = HighNBits(n,k1);
            //2 the first step children
			k2 = HighNBits(n,k2);
			if(k2 > max){
				max = k2;
			}
            //Children 2 second step
			k2 = HighNBits(n,k2);
			if(k2 > max){
				max = k2;
			}
        }while(k1 != k2);//Soon after a slow child child stopped
        printf("%d\n",max);
    }
    return 0;
}