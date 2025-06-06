//~ while (clock()<=69*CLOCKS_PER_SEC)
//~ #pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("O3")
//~ #pragma GCC target ("avx2")
//~ #pragma GCC optimize("Ofast")
//~ #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//~ #pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#define shandom_ruffle random_shuffle

using ll=long long;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;
const int nax=1000*1007;
const int inf=1e9;

int n;

vi graf[nax];

vector<pll> dp[nax][3];//{rozmiar, sumaryczna kara} kara za i to i

void ogarnij(vector<pll> &wek)
{
	sort(wek.begin(), wek.end());
	static vector<pll> pom;
	pom.clear();
	pom.swap(wek);
	for (pll i : pom)
	{
		if (!wek.empty() && wek.back().second<=i.second)
			continue;
		wek.push_back(i);
	}
}

void przepisz(int v, int u)
{
	for (int i=1; i<=2; i++)
	{
		dp[0][i]=dp[v][i];
	}
	for (int i=1; i<=2; i++)
	{
		ll mini=inf;
		for (pll j : dp[u][3-i])
			mini=min(mini, j.second);
		for (pll &j : dp[v][i])
			j.second+=mini;
		for (pll j : dp[0][i])
			for (pll l : dp[u][i])
				dp[v][i].push_back({j.first+l.first, j.second+l.second+j.first*l.first*i});
		ogarnij(dp[v][i]);
	}
}

void dfs1(int v, int oj)
{
	dp[v][1]={{1, 1}};
	dp[v][2]={{1, 2}};
	for (int i : graf[v])
	{
		if (i==oj)
			continue;
		dfs1(i, v);
		przepisz(v, i);
	}
}

void test()
{
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
		graf[i].clear();
	for (int i=1; i<n; i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		graf[a].push_back(b);
		graf[b].push_back(a);
	}
	dfs1(1, 0);
	ll wyn=inf;
	for (int i=1; i<=2; i++)
		for (pll j : dp[1][i])
			wyn=min(wyn, j.second);
	//~ printf("%lld\n", wyn);
	debug() << imie(wyn);
	printf("%lld\n", n*(n+1LL)-wyn);
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
		test();
	return 0;
}
