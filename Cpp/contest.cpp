

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


#include <unordered_map>



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


bool Difference(int arr[], int size, int n)
{
    unordered_map<int, int> dp;
    for (int i = 0; i < size; i++) {
        dp[arr[i]]++;
    }
    for (int i = 0; i < size; i++) {
        if (dp.find(n + arr[i]) != dp.end()) {
            return true;
        }
    }
    return false;
}

int32_t main()

{
    config();

    int test;
    cin >> test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        if(Difference(arr,n,k)){
            cout << "YES" << endl;
        }
        
        else cout << "NO" << endl;
    }
    return 0;
}