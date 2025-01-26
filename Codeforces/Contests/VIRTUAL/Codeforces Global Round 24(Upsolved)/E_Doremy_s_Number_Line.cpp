/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 1e6 + 10;
#define F               first
#define S               second
#define PB              push_back
#define si              set <ll>
#define vi              vector <ll>
#define pii             pair <ll, ll>
#define vpii            vector <pii>
#define vpp             vector <pair <ll, pii>>
#define mii             map <ll, ll>
#define mpi             map <pii, ll>
#define spi             set <pii>
#define endl            "\n"
#define vsz(x)          ((ll) x.size())
#define all(p)          p.begin(), p.end()
#define rall(p)         p.rbegin(), p.rend()
#define sorta(v)        sort(all(v))
#define sortd(v)        sort(rall(v))
#define double          long double
#define MAX_CAP         1e9
#define MAX_RNG         1024
#define print(x)        cout << x << endl
#define fori(v,n)       for(ll i=v; i<n; i++)
#define ford(n,v)       for(ll i=n; i>v; i--)
#define fora(i, a, n)   for (ll i = a; i < n; ++i)
#define forad(i, a, n)  for (ll i = a; i > n; --i)
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


ll globalArr[MAX_RNG];

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

pii Multi[N];

struct compare
{
    bool operator() (pii a, pii b)
    {
        return a.F + a.S < b.F + b.S;
    }
};

void Accepted();


signed main()
{
    // config();
    ll test_kase = 1;
    cin >> test_kase;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    ll n = 0, k = 0, m = 0, q = 0;
    cin >> n >> k;

    for (ll i = 1; i <= n; i++)
    {
        cin >> Multi[i].F >> Multi[i].S;
    } 

    priority_queue<pii, vector<pii>, compare> Colored;
    for (ll i = 2; i <= n; i++)
    {
        Colored.push(Multi[i]);
    }
    if(k <= Multi[1].F)
    {
        print("YES");
        return;
    }
    if(Multi[1].F + Multi[1].S < k)
    {
        print("NO");
        return;
    }

    ll val = k-Multi[1].S;
    bool ok = 0;
    while(true)
    {
        vector<pii> v;
        while(!Colored.empty() and Colored.top().F + Colored.top().S >= val)
        {
            v.PB(Colored.top());
            Colored.pop();
        }
        if(v.size() == 0)
        {
            break;
        }
        if(v.size() == 1)
        {
            if(val <= v[0].F)
            {
                ok = 1;
                break;
            }
            if(v[0].F + v[0].S < val)
            {
                break;
            }
            val -= v[0].S;
        }
        if(v.size() > 1)
        {
            ok = 1;
            break;
        }
    }
    if(ok)
    {
        print("YES");
    }
    else
    {
        print("NO");
    }

}
