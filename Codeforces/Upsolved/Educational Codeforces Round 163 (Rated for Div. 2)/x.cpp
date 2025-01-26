// /****************************************************************\
//                    BISMILLAHIR RAHMANIR RAHIM
// \****************************************************************/

// #include <bits/stdc++.h>
// using namespace std;
 
 
// typedef long double                         ld;
// typedef unsigned                            ui;
// typedef long long                           ll;
// typedef unsigned long long                  ull;

// typedef vector<int>                         vi;
// typedef vector<vi>                          vvi;
// typedef vector<ld>                          vld;
// typedef vector<ui>                          vui;
// typedef vector<ll>                          vll;
// typedef vector<vll>                         vvll;
// typedef vector<ull>                         vull;
// typedef vector<vull>                        vvull;

// typedef list<int>                           lsi;
// typedef list<ld>                            lsld;
// typedef list<ui>                            lsui;
// typedef list<ll>                            lsll;
// typedef list<ull>                           lsull;

// typedef set<int>                            si;
// typedef set<ld>                             sld;
// typedef set<ui>                             sui;
// typedef set<ll>                             sll;
// typedef set<ull>                            sull;
 
// typedef pair<int, int>                      pii;
// typedef pair<ll, ll>                        pll;
// typedef pair<ull, ull>                      pull;
// typedef pair<ld, ld>                        pld;

// typedef vector <pii>                        vpii;
// typedef vector <pair <ll, pii>>             vpp;
// typedef map<int, int>                       mii;
// typedef map<pii, int>                       mpii;
// typedef map<ll, ll>                         mll;
// typedef map<pll, ll>                        mpll;

// typedef unordered_map<int, int>             umii;
// typedef unordered_map<ll, ll>               umll;
// typedef unordered_map<char, int>            umci;
// typedef unordered_map<char, ll>             umcl;


// #define endl                                "\n"
// #define vsz(x)                              ((ll) x.size())
// #define all(p)                              p.begin(), p.end()
// #define rall(p)                             p.rbegin(), p.rend()
// #define sorta(v)                            sort(all(v))
// #define sortd(v)                            sort(rall(v))
 
// #define f0(i,n)                             for(int i = 0; i <  (n); i++)
// #define f1(i,n)                             for(int i = 1; i <= (n); i++)
// #define rep0(i,l,r)                         for(int i=(l); i <  (r); i++)
// #define rep1(i,l,r)                         for(int i=(l); i <= (r); i++)
 
// #define len(a)                              ((int)(a).size())
// #define lcm(a, b)                           (((a)*(b))/__gcd(a,b))
// #define mem(a, b)                           memset(a, b, sizeof(a))
 
// #define pb                                  push_back
// #define pf                                  push_front
// #define mp                                  make_pair
// #define ff                                  first
// #define ss                                  second
 
// #define yes                                 cout << "yes" << endl
// #define no                                  cout << "no" << endl
// #define Yes                                 cout << "Yes" << endl
// #define No                                  cout << "No" << endl
// #define YES                                 cout << "YES" << endl
// #define NO                                  cout << "NO" << endl
// #define clean                               fflush(stdout)

 
// #define Inf                                 (int)(1e9)
// #define INF                                 (ll)(1e18)
// #define Eps                                 (ld)(1e-9)
// #define EPS                                 (ld)(1e-18)
// #define PI                                  (ld)(3.141592653589793238462643383279502884197169L)
// #define MOD                                 (int)(1e9+7)
// #define MXN                                 (int)(1e5+7)
// #define TLE                                 cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;


// inline ll min(ll a, ll b) {
//     return (a < b ? a : b);
// }
 
// inline ll max(ll a, ll b) {
//     return (a > b ? a : b);
// }

// void file()
// {
//     #ifdef ONLINE_JUDGE
//         freopen("input.txt", "r+", stdin);
//         freopen("output.txt", "w+", stdout);
//     #endif

    
// }

// void config()
// {
//     std::ios_base::sync_with_stdio(false);
//     cin.tie(nullptr); cout.tie(nullptr);
//     cout << setprecision(15) << fixed;

//     #ifdef LOCAL
//         using namespace std::chrono;
//         auto begin = steady_clock::now();
//         cout << "\nTime : " 
//                 << (ld)duration_cast<nanoseconds>
//                 (end - begin).count()/1000000000 
//                 << "s" << endl;
//     #endif

//     // file();

// }

// string read_string() {
//     string s; ui uc; ui c;
//     while ((uc = (ui)getchar()) <= 32u);
//     if (uc < 256u) s.push_back((char)uc);
//     while ((c = getchar()) > 32) s.push_back((char)c);
//     return s;
// }

// bool isPrime(ll n)
// {
//     if (n <= 1) return false;for (ll i = 2; i < n; i++) 
//     if (n % i == 0) return false; return true;
// }

// umll check_freq_int(vector<ll> x) {
//     umll freq;
//     for (auto num : x) {
//         freq[num]++;
//     }
//     return freq;
// }

// umcl check_freq_string(string x) {
//     umcl freq;
//     for (auto c : x) {
//         freq[c]++;
//     }
//     return freq;
// }
// void business_logic();

// int32_t main()
// {
//     config();    
//     int Test_case  = 1;
//     cin >> Test_case;
//     for(int Case=1; Case<=Test_case; Case++){
//         // cout << "Case " << Case << ": " << business_logic() << endl;
//         business_logic();
//     }
//     // while(Test_kase--) business_logic();
//     // TLE;
//     return 0;
// }



// bool not_null(int l, int r, string s)
// {
//     while (l < r)
//     {
//         if (s[l] != s[r])
//         {
//             return true;
//         }
//         l++;
//         r--;
//     }
//     return false;
// }

// void long_search(int l, int r, int n, int &ans, string &s, unordered_set<int> &pal)
// {
//     if (l >= r)
//     {
//         return;
//     }

//     if (not_null(l, r, s) && !pal.count(r - l + 1))
//     {
//         pal.insert(r - l + 1);
//         ans += r - l + 1;
//     }

//     long_search(l + 1, r, n, ans, s, pal);
//     long_search(l, r - 1, n, ans, s, pal);
// }

// void business_logic()
// {
//     int n, query;
//     cin >> n >> query;

//     string s;
//     cin >> s;

//     unordered_set<int> palindrm;

//     while (query--)
//     {
//         palindrm.clear();
//         int l, r;
//         cin >> l >> r;
//         l--;
//         r--;

//         int ans = 0;

//         long_search(l, r, n, ans, s, palindrm);
//         cout << ans << endl;
//     }
// }




#include <bits/stdc++.h>
using namespace std;

void aaa(const string& s, vector<vector<bool>>& isPalindrome) {
    int n = s.length();
    for (int len = 1; len <= n; ++len) {
        for (int i = 0; i + len - 1 < n; ++i) {
            int j = i + len - 1;
            if (len == 1)
                isPalindrome[i][j] = true;
            else if (len == 2)
                isPalindrome[i][j] = (s[i] == s[j]);
            else
                isPalindrome[i][j] = (s[i] == s[j] && isPalindrome[i + 1][j - 1]);
        }
    }
}

void bbb() {
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));
    aaa(s, isPalindrome);

    while (q--) {
        int l, r;
        cin >> l >> r;
        --l, --r;

        int ans = 0;
        unordered_set<int> st;

        for (int i = l; i <= r; ++i) {
            for (int j = i; j <= r; ++j) {
                if (!isPalindrome[i][j] && !st.count(j - i + 1)) {
                    st.insert(j - i + 1);
                    ans += j - i + 1;
                }
            }
        }

        cout << ans << endl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        bbb();
    }
    return 0;
}