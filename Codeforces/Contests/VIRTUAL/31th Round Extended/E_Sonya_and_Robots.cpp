/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define lli             long long int
#define F               first
#define S               second
#define PB              push_back
#define si              set <lli>
#define vi              vector <lli>
#define pii             pair <lli, lli>
#define vpii            vector <pii>
#define vpp             vector <pair <lli, pii>>
#define mii             map <lli, lli>
#define mpi             map <pii, lli>
#define spi             set <pii>
#define list            list <lli>
#define endl            "\n"
#define vsz(x)          ((lli) x.size())
#define all(p)          p.begin(), p.end()
#define rall(p)         p.rbegin(), p.rend()
#define sorta(v)        sort(all(v))
#define sortd(v)        sort(rall(v))
#define double          long double
#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;

lli const MAX_CAP = 1e9;
lli const MOD = 1e9 + 7;
lli const MAX_RNG = 1024;
lli globalArr[MAX_RNG];

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
bool binary_search(lli arr[], lli n, lli key)
{
    lli left = 0, right = n-1, mid;
    while(left <= right)
    {
        lli mid = (left+right)/2;
        if(arr[mid] == key) return true;
        else if(arr[mid] > key) right = mid - 1;
        else left = mid + 1;
    }
    return false;
}

bool isPrime(lli n)
{
    if (n <= 1) return false;for (lli i = 2; i < n; i++) 
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

const lli MAXN = 1e5 + 5;
lli a[MAXN], L[MAXN], R[MAXN];


int32_t main()
{
    config();
    lli test_kase = 1;
    // scanf("%lld", &test_kase);
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    lli n;
    cin >> n;
    for (lli i = 1; i <= n; i++) {
        cin >> a[i];
    }

    lli l_num = a[1], r_num = a[n];
    lli l_idx = 1, r_idx = n;
    for (lli i = 1; i <= n; i++) {
        if (a[i] == l_num) {
            L[l_idx] = i;
            l_idx++;
        }
        if (a[i] == r_num) {
            R[r_idx] = i;
            r_idx--;
        }
    }

    long long ans = 0;
    for (lli i = 1; i < l_idx; i++) {
        for (lli j = n; j >= r_idx; j--) {
            if (L[i] < R[j]) {
                ans += (j - r_idx);
                break;
            }
        }
    }
    cout << ans << endl;
    
}
