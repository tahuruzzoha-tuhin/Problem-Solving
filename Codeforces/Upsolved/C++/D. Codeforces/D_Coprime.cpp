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
#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;


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



// Integer 
int a,b,c,p,q,r,t,i,j,k,x,y,z,n,m;

//String
string s, str, strA, strB, strC;

//Boolean
bool flag, ok;

void solve()
{
    cin >> n;
    vi vecOne(n);
    vi vecMax(1001, -1);
    vi vecTemp;

    for (int i = 0; i < n; ++i) {
        cin >> vecOne[i];
        vecMax[vecOne[i]] = max(vecMax[vecOne[i]], i + 1);
    }

    for (int i = 0; i <= 1000; ++i) {
        if (vecMax[i] > 0) {
            vecTemp.emplace_back(i);
        }
    }

    sort(vecTemp.begin(), vecTemp.end(), [&](int x, int y) {
        return vecMax[x] > vecMax[y];
    });

    int ans = -1;

    for (int i = 0; i < n; ++i) {
        if (vecMax[vecOne[i]] != i + 1) {
            continue;
        }
        for (auto j : vecTemp) {
            if (vecMax[j] + vecMax[vecOne[i]] <= ans) {
                break;
            }
            if (gcd(j, vecOne[i]) == 1) {
                ans = vecMax[j] + vecMax[vecOne[i]];
                break;
            }
        }
    }
 
    cout << ans << endl;
    
}


int32_t main()
{
    //config();
    int t = 1;
    cin >> t;
    while(t--) solve();
    // TLE;
    return 0;
}
