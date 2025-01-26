/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define ll             long long
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


ll n;
vector<ll> digits;

ll factorial(ll x) {
    if (x == 0) return 1;
    ll res = 1;
    for (ll i = 2; i <= x; i++) {
        res *= i;
    }
    return res;
}

ll product_of_factorials() {
    ll res = 1;
    for (ll i = 0; i < digits.size(); i++) {
        res *= factorial(digits[i]);
    }
    return res;
}

void Accepted();


int32_t main()
{
    config();
    ll test_kase = 1;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    string s, Sp="";
    scanf("%lld", &n); 
    s = read_string();
    for (ll i = 0; i < n; i++) {
        ll d = s[i] - '0';
        if (d > 1) {
            if (d > 4) {
                digits.push_back(2);
                digits.push_back(2);
                digits.push_back(2);
            } else {
                digits.push_back(d);
            }
        }
    }
    sort(digits.rbegin(), digits.rend());
    ll x = 0;
    for (ll i = 0; i < digits.size(); i++) {
        x = x * 10 + digits[i];
    }
    while (x % 10 == 0 || x % 5 == 0) {
        bool found = false;
        for (ll i = 0; i < digits.size(); i++) {
            if (digits[i] % 2 == 1) {
                x = (x - digits[i]) / 10;
                digits.erase(digits.begin() + i);
                found = true;
                break;
            }
        }
        if (!found) break;
    }
    printf("%lld\n", x);
    
    
    
}

