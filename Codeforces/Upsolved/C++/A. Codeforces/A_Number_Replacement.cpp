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
#define mic             map <int, char>
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

void config(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);
    #endif
}





int globalArr[MAX_CAP];
void solve()
{
    int n = 0, m = 0, p = 0, q = 0, tmp = 0;
    cin >> n; int arr[n];
    fori(0,n) cin >> arr[i];
    string longstring; cin >> longstring;
    mic mpair;
    for(int i=0; i<n; i++){
        if(mpair.find(arr[i]) != mpair.end()){
            if(longstring[i] != mpair[arr[i]]){
                m = 1;
                break;
            }
        }
        mpair.insert({arr[i], longstring[i]});
    }
    
    m?cout << "NO" << endl : cout << "YES" << endl;

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
