/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
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
#define MAX_RNG         1024
#define print(x)        cout << x << endl
#define fori(v,n)       for(int i=v; i<n; i++)
#define forj(v,n)       for(int j=v; j<n; j++)
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
typedef long long intt;

const intt N=2e5+9;


intt n,mod;
intt Red[N],Blue[N];

intt qpow(intt a,intt b){
    intt res=1;
    while(b){
        if(b&1)
        {
            res=res*a%mod;
        }
        a=a*a%mod;
        b>>=1;
    }
    return res;
}

intt Game(intt a,intt b){
    return Red[a]*Blue[b]%mod*Blue[a-b]%mod;
}

void Accepted();


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
    intt m = 0, p = 0, q = 0, ans = 0;
    cin >> n >> mod;
    Red[0] = 1;
    Red[1] = 1;
    Blue[0] = 1;
    Blue[1] = 1;

    for(int i=2;i<N;i++)
    {
        Red[i] = Red[i-1]*i % mod;
    }

    for(int i=2;i<N;i++)
    {
        Blue[i] = Blue[i-1] * qpow(i, mod-2) % mod;
    }

    for(int i=0; i<=(n+1)/2-2; i++)
    {
        q = 0;
        for(int j=0;j<=i;j++)
        {
            q = (q + Red[n-j-3] * Game(i,j)) % mod;
        }
        ans = (ans+q*(i+2 - (n&1))) % mod;
    }

    if(n%2 == 0)
    {
        ans = (ans+Red[n-2]) % mod;
    }
    
    cout << ans*n%mod << endl;


}
