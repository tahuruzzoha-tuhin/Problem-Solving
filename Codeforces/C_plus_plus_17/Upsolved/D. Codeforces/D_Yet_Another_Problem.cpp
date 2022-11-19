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
#define MAX_CAP         1e9
#define MAX_RNG         1024
#define print(x)        cout << x << endl
#define ssz(x)          (int)((x).size())
#define sorta(v)        sort(v.begin(), v.end())
#define sortd(v)        sort(v.rbegin(), v.rend())
#define fori(i, n)      for (int i = 0; i < n; ++i)
#define repa(i, a, n)       for (int i = a; i < n; ++i)
#define repd(i, a, n)       for (int i = a; i > n; --i)

template <class T> void in(vector<T>& a) { fori(i, ssz(a)) cin >> a[i]; }
template <class T> void out(const vector<T>& a) { fori(i, ssz(a)) cout << a[i] << " \n"[i + 1 == ssz(a)]; }

const int MOD = 1e9 + 7;
const int INF = 2e9 + 7;
const long long INF_LL = 9e18 + 7;
#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;


template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}

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
    // file();

}


void Accepted() {
    int n, q; cin >> n >> q;
    vector<ll> a(n); in(a);

    vector<ll> pre_sum(n + 1, 0), pre_xor(n + 1, 0);
    map<int, int> odd, even, mp;
    odd[0] = -1;
    even[0] = 0;

    fori(i, n) 
    {
        pre_sum[i + 1] = pre_sum[i] + a[i];
        pre_xor[i + 1] = pre_xor[i] ^ a[i];
        if (i & 1) {
            if (odd.find(pre_xor[i + 1]) != odd.end()) mp[i + 1] = odd[pre_xor[i + 1]];
            else mp[i + 1] = -1;
            even[pre_xor[i + 1]] = i + 1;
        } else {
            if (even.find(pre_xor[i + 1]) != even.end()) mp[i + 1] = even[pre_xor[i + 1]];
            else mp[i + 1] = -1;
            odd[pre_xor[i + 1]] = i + 1;
        }
    }

    while (q--) {
        int l, r; cin >> l >> r;
        if (pre_sum[r] - pre_sum[l - 1] == 0) {
            cout << 0 << endl;
            continue;
        }
        if ((r - l + 1) & 1) {
            if ((pre_xor[r] ^ pre_xor[l - 1]) == 0) {
                cout << 1 << endl;
            } else {
                cout << -1 << endl;
            }
        } else {
            if ((pre_xor[r] ^ pre_xor[l - 1]) != 0) {
                cout << -1 << endl;
            } else {
                if (a[l - 1] == 0 && ((pre_xor[r] ^ pre_xor[l]) == 0)) {
                    cout << 1 << endl;
                }
                else if (a[r - 1] == 0 && ((pre_xor[r - 1] ^ pre_xor[l - 1]) == 0)) {
                    cout << 1 << endl;
                }
                else if (mp[r] > l) {
                    cout << 2 << endl;
                }
                else {
                    cout << -1 << endl;
                }
            }
        }
    }
}

int32_t main()
{
    config();
    int test_kase = 1;
    // cin >> test_kase;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}
