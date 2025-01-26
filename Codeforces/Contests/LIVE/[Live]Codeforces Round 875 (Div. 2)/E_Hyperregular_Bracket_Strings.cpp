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
const ll mod=998244353;

int n, k;

pii tab[nax];

ll sil[nax];
ll osil[nax];

ll cat[nax];

ll hasz[nax];

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll losuj()
{
	ll ret=0;
	for (int i=0; i<38; i++)
		ret=3*ret+(rng()%3);
	return ret;
}

ll inv(ll v)
{
	if (v<=1)
		return v;
	return inv(mod%v)*(mod-mod/v)%mod;
}

ll kom(int a, int b)
{
	if (b>a || b<0)
		return 0;
	return sil[a]*osil[b]%mod*osil[a-b]%mod;
}

void test()
{
	scanf("%d%d", &n, &k);
	for (int i=0; i<=n; i++)
		hasz[i]=0;
	for (int i=1; i<=k; i++)
	{
		scanf("%d%d", &tab[i].first, &tab[i].second);
		ll x=losuj();
		hasz[tab[i].first]^=x;
		hasz[tab[i].second+1]^=x;
	}
	map<ll,int> mapa;
	for (int i=1; i<=n; i++)
	{
		hasz[i]^=hasz[i-1];
		mapa[hasz[i]]++;
	}
	ll wyn=1;
	for (auto i : mapa)
	{
		int x=i.second;
		if (x&1)
			wyn=0;
		else
			wyn=wyn*cat[x/2]%mod;
	}
	printf("%lld\n", wyn);
}

int main()
{
	sil[0]=1;
	for (int i=1; i<nax; i++)
		sil[i]=(sil[i-1]*i)%mod;
	osil[nax-1]=inv(sil[nax-1]);
	for (int i=nax-1; i; i--)
		osil[i-1]=(osil[i]*i)%mod;
	for (int i=1; i<nax/2-3; i++)
		cat[i]=kom(2*i, i)*inv(i+1)%mod;
	int t;
	scanf("%d", &t);
	while(t--)
		test();
	return 0;
}
