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
#define loop(i, start, end)    for(auto i = start; (start<end)?i<end:i>end; (start<end)?i++:i--)
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


const int MOD = 1e9 + 7;
void Accepted()
{
    int n = 0, k = 0, m = 0, p = 0, q = 0, ans = 1;
    cin >> n >> k ;

    m = pow(2, k) - 1;
    vi arr, brr, crr;
    for(int i=1; i<=m/2; i++)
    {
        for(int j=0; j<=m/2; j++)
        {
            if(arr.size() == n*2 && brr.size() == n*2)
            {
                break;
            }
            if(i^j == 0)
            {
                arr.PB(i);
                brr.PB(j);
                ans = 1;
            }
        }
    }
    
    for(int i=0; i< arr.size(); i++)
    {
        crr.PB(arr[i] + brr[i]);
    }

    for(int i=n; i>max(0LL, n-k); --i)
    {
        ans = ans*n;
        ans = ans % MOD;
    }

    if(n<k)
    {
        for(int i=0; i<k-n; i++)
        {
            ans = ans * n;
            ans = ans % MOD;
        }
    }

    for(int i=1; i<arr.size(); i++)
    {
        ans += crr[i] % MOD;
    }
    for(int i=1; i<brr.size(); i++)
    {
        ans -= crr[i] % MOD;
    }
    
    print(ans);


}
