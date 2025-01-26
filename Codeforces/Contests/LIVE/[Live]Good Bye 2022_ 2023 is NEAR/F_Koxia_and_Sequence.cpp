/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define lli             int64_t
#define F               first
#define S               second
#define PB              push_back
#define si              set <lli>
#define vi              vector <lli>
#define pii             pair <lli, lli>
#define vpii            vector <pii>
#define vpp             vector <pair <lli, pii>>
#define mii             map <lli, lli>
#define mpi             map <pii, lli>
#define spi             set <pii>
#define endl            "\n"
#define vsz(x)          ((lli) x.size())
#define all(p)          p.begin(), p.end()
#define rall(p)         p.rbegin(), p.rend()
#define sorta(v)        sort(all(v))
#define sortd(v)        sort(rall(v))
#define double          long double
#define sint1(x)        scanf("%" PRId64, &x)
#define sint2(x,y)      scanf("%" PRId64 "%" PRId64, &x, &y)
#define sint3(x,y,z)    scanf("%" PRId64 "%" PRId64 "%" PRId64, &x, &y, &z)
#define sstr(x)         scanf("%s", &x)
#define pint1(x)         printf("%" PRId64 "\n", x);
#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;

lli const MAX_CAP = 1e9;
lli const MOD = 1e9 + 7;
lli const MAX_RNG = 1024;

template <class T> void vin(vector<T>& v) 
{ 
    for(lli i=0; i<vsz(v); i++) 
    {
        cin >> v[i];
    } 
}
template <class T> void vout(const vector<T>& v) 
{ 
    for(lli i=0; i<vsz(v); i++) 
    {
        cout << v[i] << " \n"[i + 1 == vsz(v)];
    } 
}
template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}


lli globalArr[MAX_RNG];

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);
    #endif
}

void config()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cout << setprecision(15) << fixed;
    // file();

}
bool binary_search(lli arr[], lli n, lli key)
{
    lli left = 0;
    lli right = n-1;
    lli mid;

    while(left <= right)
    {
        lli mid = (left+right)/2;

        if(arr[mid] == key)
        {
            return true;
        }
        else if(arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return false;
}

bool isPrime(lli n)
{
    if (n <= 1)
        return false;
 
    for (lli i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

void Accepted();


int32_t main()
{
    config();
    lli test_kase = 1;
    // scanf("%lld", &test_kase);
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    lli n, m, q = 0, p; 
    sint3(n,m,p);
	if (!(n & 1)) {
		pint1(q);
	} else {
		lli ans = 0;
		for (lli i = p; true; i = p & (i-1)) {
			for (lli j = 0; i >> j; j++) {
				if ((i >> j) & 1) {
					if (((m - (1<<j)) | (i*n - (1 << j))) == (i*n - (1 << j)))  {
						ans ^= (1 << j);
					}
				}
			}
			if (i == 0) break;
		}
		pint1(ans);
	}
    
}
