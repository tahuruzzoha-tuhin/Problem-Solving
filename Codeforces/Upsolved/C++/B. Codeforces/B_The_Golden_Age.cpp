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
#define print(x)        cout << x << endl;
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

void config(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);
    #endif
}



int log_a_to_base_b(int a, int b)
{
    return log(a) / log(b);
}

int globalArr[MAX_CAP];
void solve()
{
    int n = 0, x = 0, y = 0, l = 0, r = 0, i = 0, ans = 0;
    
    cin >> x >> y >> l >> r;
    int p = min(x,y);
    n = log_a_to_base_b(r, p) + 2;
    int d[n*n] = {0};
    fori(0,n){
        for(int j=0; j<n; j++){
            d[i*n+j] = pow(x,i) + pow(y,j);
        }
    }
    sort(d, d+n*n);
    // for(auto x:d) cout << x << " ";
    // cout << endl;
    i = 0;
    while(d[i] < l){
        i++;    
    }
    ans = min(r+1, d[i]) - l;

    while(d[i+1] <= r){
        p = d[i+1] - d[i] - 1;
        ans = max(ans, p);
        i++;
    }
    p = max(d[i], l-1);
    print(d[i])
    print(ans);
    print(p);
    ans = max(ans, p);
}


int32_t main()
{
    int t = 1;
    while(t--) solve();
    return 0;
}
