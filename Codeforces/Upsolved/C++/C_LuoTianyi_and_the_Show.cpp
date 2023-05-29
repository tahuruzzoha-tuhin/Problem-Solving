/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define F               first
#define S               second
#define PB              push_back
#define si              set <ll>
#define vi              vector <ll>
#define pii             pair <ll, ll>
#define vpii            vector <pii>
#define vpp             vector <pair <ll, pii>>
#define mii             map <ll, ll>
#define mpi             map <pii, ll>
#define spi             set <pii>
#define list            list <ll>
#define endl            "\n"
#define vsz(x)          ((ll) x.size())
#define all(p)          p.begin(), p.end()
#define rall(p)         p.rbegin(), p.rend()
#define sorta(v)        sort(all(v))
#define sortd(v)        sort(rall(v))
#define double          long double
#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;

inline ll min(ll a, ll b) {
    return (a < b ? a : b);
}

inline ll max(ll a, ll b) {
    return (a > b ? a : b);
}

ll const MAX_CAP = 1e9;
ll const MOD = 1e9 + 7;
ll const MAX_RNG = 1024;
ll globalArr[MAX_RNG];

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
bool binary_search(ll arr[], ll n, ll key)
{
    ll left = 0, right = n-1, mid;
    while(left <= right)
    {
        ll mid = (left+right)/2;
        if(arr[mid] == key) return true;
        else if(arr[mid] > key) right = mid - 1;
        else left = mid + 1;
    }
    return false;
}

bool isPrime(ll n)
{
    if (n <= 1) return false;for (ll i = 2; i < n; i++) 
    if (n % i == 0) return false; return true;
}

string read_string() {
    string s; unsigned int uc; int c;
    while ((uc = (unsigned int)getchar()) <= 32u);
    if (uc < 256u) s.push_back((char)uc);
    while ((c = getchar()) > 32) s.push_back((char)c);
    return s;
}

void Accepted();


int32_t main()
{
    config();
    ll test_kase = 1;
    scanf("%lld", &test_kase);
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    ll n=0, m=0, p=0, q=0, r=0;
    string St, Sp="";

    scanf("%lld %lld", &n, &m);

    vi arr(n), a;
    for(ll i=0; i<n; i++) {
        scanf("%lld", &arr[i]);
    }

    if (m == 1) {
        printf("1\n");
        return;
    }
    ll nm1 = count(arr.begin(), arr.end(), -1);
    ll nm2 = count(arr.begin(), arr.end(), -2);
    for (ll i : arr) {
        if (i != -1 && i != -2 && find(a.begin(), a.end(), i - 1) == a.end()) {
            a.push_back(i - 1);
        }
    }
    sort(a.begin(), a.end());
    ll ans = max(min(nm1, m), min(nm2, m));
    for (ll i = 0; i < a.size(); i++) {
        ans = max(ans, min(nm1, a[i] - i) + min(nm2, m - a[i] - a.size() + i));
    }
    ans = min(m, ans + a.size());

    printf("%lld\n", ans);
    
}
