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
    int n, queue;
    cin >> n >> queue;
    int ans = 0;
    vi Sys(n);
    int number_odd = 0, number_even = 0;
    for (int i = 0; i < n; i++) 
    {
        cin >> Sys[i];
        ans += Sys[i];
        if (Sys[i] % 2 == 0) 
        {
            number_even++;
        } 
        else 
        {
            number_odd++;
        }
    }
 
    while (queue--) {
        int data, rem;
        cin >> data >> rem;
        if (data == 0 ) 
        {
            ans += (rem * number_even);
            if ((rem % 2 != 0)){

                number_odd += number_even;
                number_even = 0;
            }
 
        } 
        else 
        {
            ans += (rem * number_odd);
            if (rem % 2 != 0) 
            {
                number_even += number_odd;
                number_odd = 0;
            }
        }
        cout << ans << endl;
    }

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
