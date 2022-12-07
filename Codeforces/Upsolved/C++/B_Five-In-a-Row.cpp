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
#define TLE             cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;


void config(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);
    #endif
}



template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}





const int DX[]{1, 0, 1, 1};
const int DY[]{0, 1, 1, -1};

char s[10][11];

int bfs() {
    
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j) 
        {
        for (int k = 0; k < 4; ++k) 
        {
            int has_o = 0;
            int cnt = 0, x = i, y = j;
            for (int m = 0; m < 5; ++m) 
            {
            if (0 <= x && x < 10 && 0 <= y && y < 10) 
            {
                if (s[x][y] == 'O') 
                {
                has_o = 1;
                } 
                else 
                {
                cnt += s[x][y] == '.';
                }
            } 
            else 
            {
                has_o = 1;
            }
            x += DX[k];
            y += DY[k];
            }
            if (!has_o && cnt == 1) 
            {
            return 1;
            }
        }
        }
  }
  return 0;
}


void solve()
{
    for (int i = 0; i < 10; ++i)
    {
        cin >> s[i];
    }
    int p = bfs();
    cout << (p ? "YES" : "NO") << endl;
}


int32_t main()
{
    //config();
    int t = 1;
    // cin >> t;
    while(t--) solve();
    // TLE;
    return 0;
}
