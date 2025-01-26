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
#define MAX_CAP         110
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

void config(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);
    #endif
}





int container[MAX_CAP], position, box[MAX_CAP];
int n = 0, m = 0, p = 0, q = 0;

void solve()
{
    cin >> n >> m;
    cin >> position;
    for( int i=2, x, y; i<=m; i++){
        cin >> x;
        y = (x-position+n) % n;
        if(y == 0) y = n;
        if( box[y] != 0 && container[position] != y){
            cout << "-1" << endl;
            exit(0);
        }
        box[y]++; container[position] = y; position = x;
    }
    for(int i=1, j=1; i<=n; i++){
        while(box[j] != 0)j++;
        if(container[i] == 0){
            container[i] = j, box[j]++;
            if(j>n){
                cout << "-1" << endl; 
                exit(0);
            }
        }
    }

    for(int i=1; i<=n; i++){
        cout << container[i] << " ";
    }

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
