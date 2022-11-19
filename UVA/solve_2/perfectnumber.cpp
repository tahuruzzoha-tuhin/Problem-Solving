/*
Author :: Md. Tahuruzzoha Tuhin
............SUST_MATH27..........
*/
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

int main()
{
    int i,j,k,m,n,x=0;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        if(x!=1)
        printf("PERFECTION OUTPUT\n");
        x=1;

        m=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
                m+=i;
        }
        if(m==n)
            printf("%5d  PERFECT\n",n);
        else if(m>n)
            printf("%5d  ABUNDANT\n",n);
        else if(m<n)
            printf("%5d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}