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
#define Df              50
#define MAX_CAP         1e9
#define MAX_RNG         1024
#define MAX_CHK         200000000
#define MAX_LMP         500000000
#define print(x)        cout << x << endl
#define fori(v,n)       for(int i=v; i<n; i++)
#define forii(v,n,m)    for(int i=v; i<n && i*i<=m; i++)
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
    file();

}

void Accepted();


int32_t main()
{
    // config();
    int test_kase = 1;
    cin >> test_kase;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    int n = 0, x = 0, k = 0, q = 0;
    cin >> n >> x;

    vi Multiples; Multiples.PB(0); 
    Multiples.PB(x); q = n >> Df;

    if(n%x != 0 || q==x)
    {
        cout << -1 << endl;
        return;
    }

    fori(2, n)
    {
        if(k==MAX_CHK)
        {
            cout << -1 << endl;
            return;
        }
        Multiples.PB(i);
    }
    Multiples.PB(1);
    k = n/x;
    forii(2,MAX_LMP,k)
    {
        while(n/x %i ==0)
        {
            Multiples[x] = x*i;
            x = x*i;
        }
    }

    if(x<n)
    {
        Multiples[x] = n;
    }

    fori(1, n+1)
    {
        cout << Multiples[i] << " ";
    }
    cout << endl;

}
