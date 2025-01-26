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

void Accepted();


int32_t main()
{
    config();
    int test_kase = 1;
    cin >> test_kase;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    int n = 0, m = 0, p = 0, q = 0, r = 0;
    cin >> n >> m >> p >> q >> r; int o = 1;
    if(m<o and m>n and q<o and r>n) 
    {
        print(0);
        return;
    }
    else if(m<o or p>n)
    {
        int mn1 = min(q,r);
        int mn2 = min(n-q+o, n-r+o);
        int mn3 = min(mn1, mn2);
        print(mn3); return;
    }
    else if(q<o or r>n)
    {
        int mn1 = min(m,p);
        int mn2 = min(n-m+o, n-p+o);
        int mn3 = min(mn1, mn2);
        print(mn3); return;
    }
    int mn1 = min(m,p);
    int mn12 = min(n-m+o, n-p+o);
    int mn13 = min(mn1, mn12);
    
    int mn2 = min(q,r);
    int mn22 = min(n-q+o, n-r+o);
    int mn23 = min(mn2, mn22);
    int ans = 0;
    if(m-q < 0)
    {
        ans += -(m-q);
    }
    else
    {
        ans += (m-q);
    }
    if(p-r < 0)
    {
        ans += -(p-r);
    }
    else
    {
        ans += (p-r);
    }

    ans = min(ans, mn13+mn23);
    print(ans);

}
