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
    int total = 0, n = 0;
    string binstring; char on = '1', ze = '0';
    cin >> n >> binstring;
    for(int i=0;i<n-1;i++){

        if(binstring[i]== on && total%2==0) {
            total++;
        }
        else if(binstring[i] == ze && binstring[i+1]== on) {
            total++;
        }
    }
    
    if(total%2==0 && binstring[n-1]=='0' && binstring[n-2]=='1')
    {
        total++;
    }
    if(total%2!=0 && binstring[n-1]=='1' && binstring[n-2]=='0')
    {
        total++;
    }
print(total);
}


int32_t main()
{
    config();
    // file();
    int testcase = 1;
    cin >> testcase;
    while(testcase--) solve();
    // TLE;
    return 0;
}
