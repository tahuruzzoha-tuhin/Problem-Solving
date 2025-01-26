/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int             long long int
#define double          long double
#define F               first
#define S               second
#define PB              push_back
#define si              set <int>
#define vi              vector <int>
#define vd              vector <double>
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
    double n = 0, m = 0, p = 0, q = 0;
    cin >> n; double w = n; n *= 2;
    vd arr; vd brr;
    while(n--)
    {
        double x, y;
        cin >> x >> y;
        if(x==0)
        {
            if(y<0) 
            {
                p = y*(-1);
            }
            else 
            {
                p = y;
            }
            brr.PB(p);
        }
        else
        {
            if(x<0) 
            {
                p = x*(-1);
            }
            else 
            {
                p = x;
            }
            arr.PB(p);
        }
    
    }
    
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    m = 0; p = 0; q = 0;
    for(int i=0; i<arr.size(); i++)
    {
        m = arr[i];
        p = brr[i];
        q += sqrt(m*m + p*p);
    }
    cout << q << endl;
    arr.clear();
    brr.clear();

}
