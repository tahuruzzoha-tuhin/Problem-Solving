// Problem: B. Madoka and the Elegant Gift
// Contest: Codeforces - Codeforces Round #777 (Div. 2)
// URL: http://codeforces.com/contest/1647/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)



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



void solve()
{
	int n, m;
    cin >> n >> m;
    char charArray[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> charArray[i][j];
        }
    }
    bool isOK = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (charArray[i][j] == '1') {
                if (i + 1 < n && charArray[i + 1][j] == '1' && j + 1 < m && charArray[i][j + 1] == '1' && charArray[i + 1][j + 1] == '0'){
                    isOK = 1;
                }
                if (i + 1 < n && charArray[i + 1][j] == '1' && j - 1 >= 0 && charArray[i][j - 1] == '1' && charArray[i + 1][j - 1] == '0'){
                    isOK = 1;
                }
                if (i - 1 >= 0 && charArray[i - 1][j] == '1' && j + 1 < m && charArray[i][j + 1] == '1' && charArray[i - 1][j + 1] == '0'){
                    isOK = 1;
                }
                if (i - 1 >= 0 && charArray[i - 1][j] == '1' && j - 1 >= 0 && charArray[i][j - 1] == '1' && charArray[i - 1][j - 1] == '0') {
                    isOK = 1;
                }
            }
        }
    }
    if (isOK){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
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

    cin >> t;


    while(t--) solve();

    TLE;



    return 0;
}


