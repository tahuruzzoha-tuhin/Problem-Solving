/*==============================================*\
ID:      Tahuruzzoha_Tuhin

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

/* For Fast Reader */
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




void sort(int a[], int n)
{
    int i, j, temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}


int main ()
{
    int n, m, i, j;
    scanf ("%d %d", &n, &m);
    int f[m];
    for(i=0;i<m;i++)
    {
        scanf("%d", &f[i]);
    }

    sort(f, m);

    j=f[n-1]-f[0];

    for(i=0;i<m-(n-1);i++)
    {
        if(f[i+(n-1)]-f[i]<j)
        {
            j=f[i+(n-1)]-f[i];
        }
    }

    printf("%d\n", j);
    return 0;
}