/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;
 
 
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

typedef vector <pii>                        vpii;
typedef vector <pair <ll, pii>>             vpp;
typedef map<int, int>                       mii;
typedef map<pii, int>                       mpii;
typedef map<ll, ll>                         mll;
typedef map<pll, ll>                        mpll;

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
// #define INF                                 (ll)(1e18)
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

const int INF = 1e9;

vector<vector<int>> adj;
vector<int> subtree_size;
vector<int> min_dist;
vector<bool> is_removed;
vector<vector<pair<int, int>>> ancestors;

int get_subtree_size(int node, int parent = -1) {
	subtree_size[node] = 1;
	for (int child : adj[node]) {
		if (child == parent || is_removed[child]) { continue; }
		subtree_size[node] += get_subtree_size(child, node);
	}
	return subtree_size[node];
}

int get_centroid(int node, int tree_size, int parent = -1) {
	for (int child : adj[node]) {
		if (child == parent || is_removed[child]) { continue; }
		if (subtree_size[child] * 2 > tree_size) {
			return get_centroid(child, tree_size, node);
		}
	}
	return node;
}

void get_dists(int node, int centroid, int parent = -1, int cur_dist = 1) {
	for (int child : adj[node]) {
		if (child == parent || is_removed[child]) { continue; }
		cur_dist++;
		get_dists(child, centroid, node, cur_dist);
		cur_dist--;
	}
	ancestors[node].push_back({centroid, cur_dist});
}

void build_centroid_decomp(int node = 0) {
	int centroid = get_centroid(node, get_subtree_size(node));

	for (int child : adj[centroid]) {
		if (is_removed[child]) { continue; }
		get_dists(child, centroid, centroid);
	}

	is_removed[centroid] = true;
	for (int child : adj[centroid]) {
		if (is_removed[child]) { continue; }
		build_centroid_decomp(child);
	}
}

void paint(int node) {
	for (auto &[ancestor, dist] : ancestors[node]) {
		min_dist[ancestor] = min(min_dist[ancestor], dist);
	}
	min_dist[node] = 0;
}

void query(int node) {
	int ans = min_dist[node];
	for (auto &[ancestor, dist] : ancestors[node]) {
		if (!dist) { continue; }
		ans = min(ans, dist + min_dist[ancestor]);
	}

	cout << ans << "\n";
}


int32_t main()
{
    config();    
    // int Test_case  = 1;
    // cin >> Test_case;
    // for(int Case=1; Case<=Test_case; Case++){
        // cout << "Case " << Case << ": " << business_logic() << endl;
    business_logic();
    // }
    // while(Test_kase--) business_logic();
    // TLE;
    return 0;
}

void business_logic()
{
	int N, M;
	cin >> N >> M;

	adj.assign(N, vector<int>());
	for (int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	subtree_size.assign(N, 0);
	ancestors.assign(N, vector<pair<int, int>>());
	is_removed.assign(N, false);
	build_centroid_decomp();

	min_dist.assign(N, INF);
	paint(0);
	for (int i = 0; i < M; i++) {
		int t, v;
		cin >> t >> v;
		v--;
		if (t == 1) {
			paint(v);
		} else {
			query(v);
		}
	}
    
}
