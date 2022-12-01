/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int             long long int
#define F               first
#define S               second
#define PB              push_back
#define si              set <int>
#define vi              vector <int>
#define pii             pair <int, int>
#define vpii            vector <pii>
#define vpp             vector <pair <int, pii>>
#define mii             map <int, int>
#define mpi             map <pii, int>
#define spi             set <pii>
#define endl            "\n"
#define vsz(x)          ((int) x.size())
#define all(p)          p.begin(), p.end()
#define rall(p)         p.rbegin(), p.rend()
#define sorta(v)        sort(all(v))
#define sortd(v)        sort(rall(v))
#define double          long double
#define MAX_CAP         1e9
#define MAX_RNG         1024
#define print(x)        cout << x << endl
#define fori(v,n)       for(int i=v; i<n; i++)
#define ford(n,v)       for(int i=n; i>v; i--)
#define fora(i, a, n)   for (int i = a; i < n; ++i)
#define forad(i, a, n)  for (int i = a; i > n; --i)
#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;
template <class T> void vin(vector<T>& v) 
{ 
    fori(i, vsz(v)) 
    {
        cin >> v[i];
    } 
}
template <class T> void vout(const vector<T>& v) 
{ 
    fori(i, sz(v))
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


int globalArr[MAX_RNG];

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

const int N = 1e5 + 5;
int n, garbage, a[N], b[N], c[N], d[N];
int lft[N], rgt[N],top[N], bot[N];

void Accepted();

void update(int bit[], int idx)
{
    while(idx < N)
    {
        ++bit[idx];
        idx += idx & - idx;
    }
}

int query(int bit[], int idx)
{
    int res = 0;
    while(idx)
    {
        res += bit[idx];
        idx -= idx & - idx;
    }
    return res;
}



int32_t main()
{
    config();
    int test_kase = 1;
    // cin >> test_kase;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    int n = 0, m = 0, p = 0, q = 0;
    cin >> n; cin >> garbage >> garbage;

    fori(1, n+1)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        update(lft, min(a[i], c[i]));
        update(rgt, max(a[i], c[i]));
        update(top, min(b[i], d[i]));
        update(bot, max(b[i], d[i]));
    }


    cin >> lft[0] >> rgt[0] >> top[0] >> bot[0];
    for(int i = 1 ; i <= n ; ++i)
    {
        int p = query(lft , max(a[i] , c[i]) - 1);
        int q = n - query(rgt , min(a[i] , c[i]));
        int r = query(top , max(b[i] , d[i]) - 1);
        int s = n - query(bot , min(b[i] , d[i]));

		if((p - (a[i] != c[i]) == lft[0]) && (q - (a[i] != c[i]) == rgt[0]) )
        {
			if((r - (b[i] != d[i]) == top[0]) && s - (b[i] != d[i]) == bot[0])
            {
                cout << i <<endl;
                return;
            }
		}
	}
	cout << -1 << endl;


}
