#include<bits/stdc++.h>
using namespace std;

#define int long  long int
#define double long long double
#define F first
#define S second
#define PB push_back
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define vpp vector <pair, <int, pii>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set <pii>
#define endl "\n"
#define sz(x) ((int)x.size())
#define all(p) p.begin(), p.end()
#define print(x) cout << x << endl


int32_t main()
{
    int x = 0, N = 100;
    for (int i = 1; i <= N; i *= 2)
        for (int j = 1; j <= i; j++)
            x++;
    print(x);
    return 0;
}