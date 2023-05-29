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
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    ll n=0, m=0, p=0, q=0, r=0;
    string St, Sp="";
    scanf("%lld", &n);

    vi arr(n), brr(n), crr;
    for(ll i=0; i<n; i++) {
        scanf("%lld", &arr[i]);
        brr[i] = arr[i];
    }

    sorta(arr);

    bool already_sorted = true;
    for (ll i = 0; i < n; i++) {
        if (arr[i] != brr[i]) {
            already_sorted = false;
            break;
        }
    }
    if (already_sorted) {
        printf("yes\n1 1\n");
        return;
    }

    ll start = -1, end = -1;
    for (ll i = 0; i < n; i++) {
        if (arr[i] != brr[i]) {
            if (start == -1) start = i;
            end = i;
        }
    }

    reverse(brr.begin() + start, brr.begin() + end + 1);
    bool sorted = true;
    for (ll i = 1; i < n; i++) {
        if (brr[i] < brr[i - 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        printf("yes\n%lld %lld\n", start + 1, end + 1);
    } else {
        printf("no\n");
    }
}
