
/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


#include <bits/stdc++.h>
using namespace std;

#define int             long long int
#define F               first
#define S               seconde
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


#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;




template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}

// ATTCGGGA



// int solve()
void solve()
{

    string s;
    cin >> s;
    int n = s.length(), p = 1, q = 1;
    for(int ti=1; ti<n; ti++){
        if(s[ti] == s[ti-1]) p++;
        else {
            q = max(q,p);
            p = 1;
        }
    }
    q = max(p,q);
    print(q);

}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r+", stdin);
    // freopen("output.txt", "w+", stdout);
    // #endif

    int t = 1;

    // cin >> t;

    // while(t--) print(solve());
    while(t--) solve();

    // TLE;



    return 0;
}
