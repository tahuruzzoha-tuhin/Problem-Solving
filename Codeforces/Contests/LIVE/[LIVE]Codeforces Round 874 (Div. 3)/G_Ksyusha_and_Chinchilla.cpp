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
 
using std::min;
using std::max;
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
using std::priority_queue;
using std::istream_iterator;
using std::ostream_iterator;
 
 
typedef long double                         ld;
typedef unsigned                            ui;
typedef long long                           ll;
typedef unsigned long long                  ull;

typedef vector<int>                         vi;
typedef vector<ld>                          vld;
typedef vector<ui>                          vui;
typedef vector<ll>                          vll;
typedef vector<ull>                         vull;

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

typedef vector <pii>                        vpii;
typedef vector <pair <ll, pii>>             vpp;
typedef map <int, int>                      mii;
typedef map <ll, ll>                        mll;
typedef map <pii, ll>                       mpi;

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
#define MXN                                 (int)(2e5+200)
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

bool isPrime(ll n)
{
    if (n <= 1) return false;for (ll i = 2; i < n; i++) 
    if (n % i == 0) return false; return true;
}

string read_string() {
    string s; ui uc; ui c;
    while ((uc = (ui)getchar()) <= 32u);
    if (uc < 256u) s.push_back((char)uc);
    while ((c = getchar()) > 32) s.push_back((char)c);
    return s;
}

int n;
vpii tree[MXN];
int branch[MXN];

int dfs(int c, int l, int pi){
    vi one, two;
    for(auto [i, vi]:tree[c]){
        if(i==l) continue;
        int over = dfs(i,c,vi);
        if(over==-1) return -1;
        if(over==1){
            one.pb(i);
            branch[vi] = 1;
        } else if(over == 2){
            two.pb(i);
            branch[vi] = 1;
        }
    }
    ll szone = one.size();
    ll sztwo = two.size();

    if(sztwo){
        if(sztwo>1) return -1;
        if(szone) return -1;
        return 0;
    } else {
        if(szone==0) return 1;
        else if(szone==1) return 2;
        else if(szone==2) return 0;
        else return -1;
    }
}

void Accepted();

int32_t main()
{
    config();
    
    int Test_case  = 1;
    cin >> Test_case;
    for(int Case=1; Case<=Test_case; Case++){
        // cout << "Case " << Case << ": " << Accepted() << endl;
        Accepted();
    }
    // while(Test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    cin >> n;
    for(int i=1; i<=n; i++){
        tree[i].clear();
        branch[i] = 0;
    }
    for(int i=1; i<n; i++){
        int x, y; 
        cin >> x >> y;
        tree[x].pb({y,i});
        tree[y].pb({x,i});
    }
    if(n%3){
        cout << "-1" << endl;
        return;
    }
    int res=dfs(1,-1,-1);
    if(res==0){
        vi cutting;
        for(int i=1; i<n; i++) 
            if(!branch[i]) 
                cutting.pb(i);
        cout << cutting.size() << endl;
        for(int x:cutting) 
            cout << x << " ";
        cout << endl; 
    } else {
        cout << "-1" << endl;
    }
    
}
