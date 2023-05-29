#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define pii pair<int, int> 
#define pll pair<ll, ll> 
#define pb push_back
#define mp make_pair

// Constants
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fLL;
const db EPS = 1e-9;
const db PI = acos(-1.0);

// Macros
#define fi first
#define se second
#define sz(x)(int)(x).size()
#define all(x)(x).begin(), (x).end()
#define rall(x)(x).rbegin(), (x).rend()
#define fillv(x, v) memset(x, v, sizeof(x))
#define loop(i, a, b) for (int i = (a); i <= (b); ++i)
#define rloop(i, a, b) for (int i = (a); i >= (b); --i)
#define each(it, x) for (auto it: (x))

	// Debugging macros
	void debug()
	{
		cerr << endl;
	}

template < typename T, typename...Args >
	void debug(T x, Args...args)
	{
		cerr << " " << x;
		debug(args...);
	}
#ifdef ONLINE_JUDGE
#define dbg(...)
#else
#define dbg(...)\
cerr << "[" << #__VA_ARGS__ << "]:", \
	debug(__VA_ARGS__)
#endif

// Input/output
template < typename T>
	void read(T & x)
	{
		cin >> x;
	}

template < typename T>
	void write(T x)
	{
		cout << x;
	}

template < typename T>
	void writeln(T x)
	{
		cout << x << '\n';
	}

// Functions
ll powmod(ll a, ll b, ll mod)
{
	ll res = 1;
	while (b > 0)
	{
		if (b & 1) res = (res *a) % mod;
		a = (a *a) % mod;
		b >>= 1;
	}

	return res;
}

// Algorithms
namespace alg
{
	// Binary search on the range[lo, hi) for the first element that satisfies p
    template <typename T, typename Pred>
    T bsearch(T lo, T hi, Pred p)
    {
        assert(p(lo) == false && p(hi - 1) == true);
        while (lo < hi) {
            T mid = lo + (hi - lo) / 2;
            if (p(mid)) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        return lo;
    }


	// Compute the greatest common divisor of two integers
	int gcd(int a, int b)
	{
		return b == 0 ? a : gcd(b, a % b);
	}

	// Compute the lowest common multiple of two integers
	int lcm(int a, int b)
	{
		return a / gcd(a, b) *b;
	}

	// Compute x^n modulo m using exponentiation by squaring
	ll powmod(ll x, ll n, ll m)
	{
		x %= m;
		ll res = 1;
		while (n > 0)
		{
			if (n & 1) res = res *x % m;
			x = x *x % m;
			n >>= 1;
		}

		return res;
	}

	// Generate all prime factors of a given integer
	vector<int> factorize(int n)
	{
		vector<int> factors;
		for (int p = 2; p * p <= n; ++p)
		{
			while (n % p == 0)
			{
				factors.push_back(p);
				n /= p;
			}
		}

		if (n > 1) factors.push_back(n);
		return factors;
	}

	// Generate all divisors of a given integer
	vector<int> divisors(int n)
	{
		vector<int> divs;
		for (int i = 1; i * i <= n; ++i)
		{
			if (n % i == 0)
			{
				divs.push_back(i);
				if (i *i != n) divs.push_back(n / i);
			}
		}

		return divs;
	}
}	// namespace alg

// Data structures
namespace ds
{
	// Disjoint set union data structure


    // Binary indexed tree
    struct BIT
    {
        vector<int> bit;

        BIT(int n): bit(n + 1) {}

        void add(int x, int v)
        {
            for (++x; x < sz(bit); x += x &-x) bit[x] += v;
        }

        int sum(int x)
        {
            int res = 0;
            for (++x; x > 0; x -= x &-x) res += bit[x];
            return res;
        }

        int query(int lo, int hi)
        {
            return sum(hi) - sum(lo - 1);
        }
    };

    // Segment tree with lazy propagation
    struct SegTreeLazy
    {
        vector<int> seg;
        vector<int> lazy;
        int n;

        SegTreeLazy(int n_): n(n_), seg(4 *n), lazy(4 *n) {}

        void push(int id, int l, int r)
        {
            seg[id] += lazy[id];
            if (l + 1 < r)
            {
                lazy[2 *id + 1] += lazy[id];
                lazy[2 *id + 2] += lazy[id];
            }

            lazy[id] = 0;
        }

        void modify(int lo, int hi, int val, int id = 0, int l = 0, int r = -1)
        {
            if (r == -1) r = n;
            push(id, l, r);
            if (lo <= l && r <= hi)
            {
                lazy[id] += val;
                push(id, l, r);
                return;
            }

            if (hi <= l || r <= lo) return;
            int m = (l + r) >> 1;
            modify(lo, hi, val, 2 *id + 1, l, m);
            modify(lo, hi, val, 2 *id + 2, m, r);
            seg[id] = min(seg[2 *id + 1], seg[2 *id + 2]);
        }

        int query(int lo, int hi, int id = 0, int l = 0, int r = -1)
        {
            if (r == -1) r = n;
            push(id, l, r);
            if (lo <= l && r <= hi) return seg[id];
            if (hi <= l || r <= lo) return INF;
            int m = (l + r) >> 1;
            return min(query(lo, hi, 2 *id + 1, l, m), query(lo, hi, 2 *id + 2, m, r));
        }
    };

}	// namespace ds

// Main function
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	// #ifdef LOCAL
	//     freopen("input.txt", "r", stdin);#
	// #endif

	int t = 1;
	// cin >> t;

	while (t--)
	{
        std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int x = 5;
        auto p = [&](int i) { return v[i] >= x; };
        int idx = bsearch(0, static_cast<int>(v.size()), p);

        std::cout << "The index of the first element >= " << x << " is " << idx << std::endl;

	}

	return 0;
}

