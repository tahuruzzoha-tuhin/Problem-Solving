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
#define MAX_CAP         1e9
#define MAX_RNG         1024
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
    // file();

}

// int globalArr[MAX_CAP];

void Accepted()
{
    int n = 0, m = 0, p = 0, q = 0;
    string s = "BAN", s2 = "";
    cin >> n;
    fori(0,n)
    {
        s2 += s;
    }
    q = s2.length();
    
    // if(n==1)
    // {
    //     cout << 1 << endl;
    //     cout << 1 << " " << 2 << endl;
    // }
    // else
    // {
    //     for(int i=2; i<q; i+=4)
    //     {
    //        if(i%2==0)
    //        {
    //          cout << n-1 << endl;
    //          cout << i << " " << i+4 << endl;
    //        } 
    //        else
    //        {
    //         continue;
    //        } 
    //     }
    // }
    p = (n+1) / 2;
    cout << p << endl;
    fori(0,p)
    {
        cout << (i*3) + 1 << " " << 3*(n-i) << endl;
    }

}


int32_t main()
{
    config();
    int test_kase = 1;
    cin >> test_kase;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}
