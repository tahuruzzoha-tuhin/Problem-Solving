/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int             int
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
#define fori(i, a, n)   for (int i = a; i < n; ++i)
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





int globalArr[MAX_CAP];

void solve() {
    int n, i=0;
    string Random;

    char char1 = '1', char0 = '0';
    cin >> n >> Random;

    string initiate = "";
    int first = 0;

    while (first < n && Random[first] == '0') first++;
	for (i = first ; i < n; ++i)initiate += Random[i];

    int sized = initiate.size();
    if (sized == 0) {
        cout << "0" << endl;
        return;
    }

    string approx = initiate;
    string accurate = initiate;

    int live = 0, nutral = 0;
    i = 0;
    while (i < sized && initiate[i] == char1) {
        live++;
        i++;
    }
    int start = i;

    while (i < sized && initiate[i] == char0) {
        nutral++;
        i++;
    }
    int start_one = max(0, live - nutral);

    int middle = start;
    int dest = 0;

    while (start < sized && start_one < sized) {
        if (initiate[start_one] == char1) {
            approx[start] = char1;
        }
        start++;
        start_one++;
    }

    while (middle < sized && dest < sized) {
        if (initiate[dest] == char1) {
            accurate[middle] = char1;
        }
        middle++;
        dest++;
    }

    cout << max(approx, accurate) << endl;
}


int32_t main()
{
    //config();
    int test = 1;
    // cin >> t;
    while(test--) solve();
    // TLE;
    return 0;
}
 