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
#define vsz(x)          ((int) x.size())
#define all(p)          p.begin(), p.end()
#define rall(p)         p.rbegin(), p.rend()
#define sorta(v)        sort(all(v))
#define sortd(v)        sort(rall(v))
#define double          long double
#define MAX_CAP         1e9
#define MAX_RNG         1024
#define print(x)        cout << x << endl
#define fori(v,n)       for(int i=v; i<n; i++)
#define ford(n,v)       for(int i=n; i>v; i--)
#define fora(i, a, n)   for (int i = a; i < n; ++i)
#define forad(i, a, n)  for (int i = a; i > n; --i)
#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;
template <class T> void vin(vector<T>& v) 
{ 
    fori(i, vsz(v)) 
    {
        cin >> v[i];
    } 
}
template <class T> void vout(const vector<T>& v) 
{ 
    fori(i, sz(v))
    {
        cout << v[i] << " \n"[i + 1 == vsz(v)];
    } 
}
template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}


int globalArr[MAX_RNG];

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);
    #endif
}

void config()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cout << setprecision(15) << fixed;
    // file();

}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

void Accepted();


int32_t main()
{
    config();
    int test_kase = 1;
    cin >> test_kase;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

bool binary_search(vi arr, int n, int key)
{
    int left = 0;
    int right = n-1;
    int mid;

    while(left <= right)
    {
        int mid = (left+right)/2;

        if(arr[mid] == key)
        {
            return true;
        }
        else if(arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return false;
}

int const mod = 1e9+7;
void Accepted()
{
    int n = 0;
    cin >> n; int arr[500010];
    for(int i=1; i<=n; i++) {
        cin >> arr[i];
    }
    
    vi bag1, bag2, bag3;
    sort(arr+1, arr+1+n);
    for(int i=1; i<=n; i+=3){
        // bool status = binary_search(bag1, bag1.size(), arr[i]);
        // if(!status){
        bag1.PB(arr[i]);
        // }
    }
    for(int i=2; i<=n; i+=3){
        // bool status = binary_search(bag2, bag2.size(), arr[i]);
        // if(!status){
        bag2.PB(arr[i]);
        // }
    }
    for(int i=3; i<=n; i+=3){
        // bool status = binary_search(bag3, bag3.size(), arr[i]);
        // if(!status){
        bag3.PB(arr[i]);
        // }
    }
    sort(bag1.begin(), bag1.end());
    sort(bag2.begin(), bag2.end());
    sort(bag3.begin(), bag3.end());

    int ans = 0;
    for(int i=n; i>=3; i--){
        ans = max(ans, arr[i]*2-arr[i-1]-arr[1]);
    }
    for(int i=1; i<=n-2; i++){
        ans = max(ans, arr[n]+arr[i+1]-arr[i]*2);
    }

    int max_bricks1 = INT_MAX, max_bricks2 = INT_MAX, max_bricks3 = INT_MAX;

    for(auto x:bag1){
        max_bricks1 = min(max_bricks1, x);
    }
    for(auto x:bag2){
        max_bricks2 = min(max_bricks2, x);
    }
    for(auto x:bag3){
        max_bricks3 = min(max_bricks3, x);
    }
    int p = ((abs(max_bricks1-max_bricks2) + abs(max_bricks2-max_bricks3) ) % mod);
    ans = !p ? ans : ans ;
    cout << ans << endl;
    bag1.clear();
    bag2.clear();
    bag3.clear();
}
