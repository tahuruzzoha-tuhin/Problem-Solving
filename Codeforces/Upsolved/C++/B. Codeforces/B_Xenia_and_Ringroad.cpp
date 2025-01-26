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
int a,b,c,p,q,r,t,i,j,k,x,y,z,n,m,f;

//String
string s, str, strA, strB, strC;

//Boolean
bool flag, ok;

void solve()
{
    cin>>n>>m;f=1;a=0;for(i=0;i<m;i++){cin>>x;a+=((x-f+n)%n);f=x;}print(a);
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

// #include<iostream> 
// using namespace std; int main(){int64_t n,m,x,f=1,a=0,i;cin>>n>>m;f=1;a=0;for(i=0;i<m;i++){cin>>x;a+=((x-f+n)%n);f=x;}cout<<a<<endl;return 0;}