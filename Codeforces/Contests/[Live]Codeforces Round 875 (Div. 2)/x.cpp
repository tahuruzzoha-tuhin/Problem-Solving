/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
\****************************************************************/

#include <iostream>
#include <iomanip>
#include <chrono>
 
#include <cmath>
#include <string>
#include <algorithm>
#include <iterator>
  
#include <set>
#include <map>
#include <list>
#include <stack>
#include <tuple>
#include <queue>
#include <deque>
#include <vector>

#include <utility>
#include <bitset>
#include <limits.h>
 

using std::get;
using std::sort;
using std::stoi;

using std::find;
using std::copy;
using std::move;
using std::swap;
using std::fixed;
using std::getline;

using std::make_pair;
using std::to_string;
using std::upper_bound;
using std::lower_bound;
using std::setprecision;
 
using std::cin;
using std::cout;
using std::cerr;

using std::set;
using std::map;
using std::list;
using std::tuple;
using std::stack;
using std::queue;
using std::deque;
using std::string;
using std::vector;

using std::pair;
using std::less;
using std::bitset;
using std::greater;
using std::unordered_map;
using std::priority_queue;
using std::istream_iterator;
using std::ostream_iterator;
 
 
typedef long double                         ld;
typedef unsigned                            ui;
typedef long long                           ll;
typedef unsigned long long                  ull;

typedef vector<int>                         vi;
typedef vector<vi>                          vvi;
typedef vector<ld>                          vld;
typedef vector<ui>                          vui;
typedef vector<ll>                          vll;
typedef vector<vll>                         vvll;
typedef vector<ull>                         vull;
typedef vector<vull>                        vvull;

typedef list<int>                           lsi;
typedef list<ld>                            lsld;
typedef list<ui>                            lsui;
typedef list<ll>                            lsll;
typedef list<ull>                           lsull;

typedef set<int>                            si;
typedef set<ld>                             sld;
typedef set<ui>                             sui;
typedef set<ll>                             sll;
typedef set<ull>                            sull;
 
typedef pair<int, int>                      pii;
typedef pair<ll, ll>                        pll;
typedef pair<ull, ull>                      pull;
typedef pair<ld, ld>                        pld;

typedef vector<pii>                        vpii;
typedef vector<pair <ll, pii>>             vpp;
typedef map<int, int>                      mii;
typedef map<pii, int>                      mpii;
typedef map<ll, ll>                        mll;
typedef map<pll, ll>                       mpll;

typedef unordered_map<int, int>             umii;
typedef unordered_map<ll, ll>               umll;
typedef unordered_map<char, int>            umci;
typedef unordered_map<char, ll>             umcl;


#define endl                                "\n"
#define vsz(x)                              ((ll) x.size())
#define all(p)                              p.begin(), p.end()
#define rall(p)                             p.rbegin(), p.rend()
#define sorta(v)                            sort(all(v))
#define sortd(v)                            sort(rall(v))
 
#define f0(i,n)                             for(int i = 0; i <  (n); i++)
#define f1(i,n)                             for(int i = 1; i <= (n); i++)
#define rep0(i,l,r)                         for(int i=(l); i <  (r); i++)
#define rep1(i,l,r)                         for(int i=(l); i <= (r); i++)
 
#define len(a)                              ((int)(a).size())
#define lcm(a, b)                           (((a)*(b))/__gcd(a,b))
#define mem(a, b)                           memset(a, b, sizeof(a))
 
#define pb                                  push_back
#define pf                                  push_front
#define mp                                  make_pair
#define ff                                  first
#define ss                                  second
 
#define yes                                 cout << "yes" << endl
#define no                                  cout << "no" << endl
#define Yes                                 cout << "Yes" << endl
#define No                                  cout << "No" << endl
#define YES                                 cout << "YES" << endl
#define NO                                  cout << "NO" << endl
#define clean                               fflush(stdout)

 
#define Inf                                 (int)(1e9)
#define INF                                 (ll)(1e18)
#define Eps                                 (ld)(1e-9)
#define EPS                                 (ld)(1e-18)
#define PI                                  (ld)(3.141592653589793238462643383279502884197169L)
#define MOD                                 (int)(1e9+7)
#define MXN                                 (int)(1e5+7)
#define TLE                                 cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;


inline ll min(ll a, ll b) {
    return (a < b ? a : b);
}
 
inline ll max(ll a, ll b) {
    return (a > b ? a : b);
}

void file()
{
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r+", stdin);
        freopen("output.txt", "w+", stdout);
    #endif

   
}

void config()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cout << setprecision(15) << fixed;

    #ifdef LOCAL
        using namespace std::chrono;
        auto begin = steady_clock::now();
        cout << "\nTime : " 
                << (ld)duration_cast<nanoseconds>
                (end - begin).count()/1000000000 
                << "s" << endl;
    #endif

    // file();

}

string read_string() {
    string s; ui uc; ui c;
    while ((uc = (ui)getchar()) <= 32u);
    if (uc < 256u) s.push_back((char)uc);
    while ((c = getchar()) > 32) s.push_back((char)c);
    return s;
}

bool isPrime(ll n)
{
    if (n <= 1) return false;for (ll i = 2; i < n; i++) 
    if (n % i == 0) return false; return true;
}

umll check_freq_int(vector<ll> x) {
    umll freq;
    for (auto num : x) {
        freq[num]++;
    }
    return freq;
}

umcl check_freq_string(string x) {
    umcl freq;
    for (auto c : x) {
        freq[c]++;
    }
    return freq;
}
void business_logic();

int32_t main()
{
    config();    
    int Test_case  = 1;
    cin >> Test_case;
    for(int Case=1; Case<=Test_case; Case++){
        // cout << "Case " << Case << ": " << business_logic() << endl;
        business_logic();
    }
    // while(Test_kase--) business_logic();
    // TLE;
    return 0;
}

// void Accepted()
// {
//     ll n=0, m=0, x=0, y=0;
//     string st, sp="";
    
//     // cin >> n >> m;
//     // St = read_string();
//     // vll vec {istream_iterator<ll>(cin), istream_iterator<ll>()};
//     // copy(vec.begin(), vec.end(), ostream_iterator<ll>(cout, " "));
    
//     cin >> n;
//     vll vec1(n); f0(i,n) cin >> vec1[i];
//     vll vec2(vec1);
//     sorta(vec2);
//     umll permut;
//     f0(i,n) permut[vec2[i]] = vec2[n-i-1];
//     f0(i,n) cout << permut[vec1[i]] << " ";
//     cout << endl;    
// }


/*__________________________________________________________________________*/


// void Accepted()
// {
//     ll n=0, m=0, x=0, y=0;
//     string st, sp="";
    
//     // cin >> n >> m;
//     // St = read_string();
//     // vll vec {istream_iterator<ll>(cin), istream_iterator<ll>()};
//     // copy(vec.begin(), vec.end(), ostream_iterator<ll>(cout, " "));
    
//     cin >> n;
//     vll vec1(n); f0(i,n) cin >> vec1[i];
//     vll vec2(n); f0(i,n) cin >> vec2[i];
//     umll map_one;
//     umll map_two;
//     ll count=1, merged=0;
//     f0(i,n){
//         if(i==n-1) {
//             map_one[vec1[i]]=max(count, map_one[vec1[i]]);
//             break;
//         }
//         if(vec1[i+1]==vec1[i]) count++;
//         else {
//             map_one[vec1[i]]=max(count, map_one[vec1[i]]);
//             count=1;
//         }
//     }
//     count=1;
//     f0(i,n){
//         if(i==n-1) {
//             map_two[vec2[i]]=max(count, map_two[vec2[i]]);
//             break;
//         }
//         if(vec2[i+1]==vec2[i]) count++;
//         else {
//             map_two[vec2[i]]=max(count, map_two[vec2[i]]);
//             count=1;
//         }
//     }
//     // auto merge = max(max_element(all(vec1)), max_element(all(vec2)));
//     f0(i,n) merged=max(merged, map_one[vec1[i]]+map_two[vec1[i]]);
//     f0(i,n) merged=max(merged, map_one[vec2[i]]+map_two[vec2[i]]);
//     cout << merged << endl;

// }


/*__________________________________________________________________________*/

// mpii copil;
// ll tree(vvi &side, ll p, ll i){
//     ll draw = 0, len=side[i].size();
//     for (ll j = 0; j < len; j++) {
//         ll x = 0;
//         if (side[i][j] == p) continue;
//         if (copil[{p,i}] > copil[{i,side[i][j]}]) x++;
//         draw = max(draw, x + tree(side, i, side[i][j]));
//     }
//     return draw;
// }

// void business_logic(){
//     ll n=0; cin >> n;
//     ll draw=0, len=0;
//     vvi side(n+1);
//     copil.clear();
//     f0(i,n-1){
//         ll node1, node2;
//         cin >> node1 >> node2;
//         copil[{node1, node2}]=i;
//         copil[{node2, node1}]=i;
//         side[node1].pb(node2);
//         side[node2].pb(node1);
//     }
//     len=side[1].size();
//     f0(i,len) draw=max(draw, tree(side,1,side[1][i]));
//     cout << draw+1 << endl;


// }

/*__________________________________________________________________________*/


void business_logic(){
    ll n, ans=0; cin >> n;
    vpii vec(n);
    f0(i,n) cin >> vec[i].ff;
    f0(i,n) cin >> vec[i].ss;
	sorta(vec);
	for(ll i=1; i*i<=n*2; i++){
		vi pair_counts(n+1,0);
		for(auto [key,value]:vec){
			ll count=key*i-value;
			if(count>=1 && count<=n) ans+=pair_counts[count];
			if(key==i) pair_counts[value]++;
		}
	}
    cout << ans << endl;
    
}