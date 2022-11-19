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
#define sz(x)           ((int) x.size())
#define all(p)          p.begin(), p.end()
#define double          long double
#define MAX_CAP         1024
#define print(x)        cout << x << endl
#define fori(v,n)       for(int i=v; i<n; i++)
#define ford(n,v)       for(int i=n; i>v; i--)
#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;


template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}

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
}

int globalArr[MAX_CAP];

void solve()
{
    int n = 0, cumulative = 0, k = 0, p= 0; si uniquediv;
    cin >> n; int arr[n+10]={0};
    fori(1,n+1) cin >> arr[i], cumulative += arr[i];
    if(cumulative%2) print("NO"), exit(0);
    for(int j=0; j<2; j++)
    {
        k = 0; uniquediv.clear();
        for(int i=1; i<=n; i++)
        {
            k += arr[i]; uniquediv.insert(arr[i]);
            p = k-cumulative/2;
            if(uniquediv.find(p) != uniquediv.end()) print("YES"), exit(0);
        }
        reverse(arr+1, arr+n+1);
    }
    print("NO");
}


int32_t main()
{
    config();
    int t = 1;
    // cin >> t;
    while(t--) solve();
    // TLE;
    return 0;
}
