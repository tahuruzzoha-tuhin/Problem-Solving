/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int             long long int
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
#define MAX_CAP         101
#define print(x)        cout << x << endl
#define fori(v,n)       for(int i=v; i<n; i++)
#define ford(n,v)       for(int i=n; i>v; i--)
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
}


void solve()
{
	int n, w, Cup[MAX_CAP], Dp[MAX_CAP], finish = 0,
    restof = 0, man1 = 0, man2 = 0, initial = 0;
    cin >> n >> w;
	
    fori(0,n) 
    {
        cin >> Cup[i];
        Dp[i] = (Cup[i] + 1) / 2;
        restof += Dp[i];
    }

	if (restof > w)
	{
		cout << -1 << endl;
		return;
	}

	while (restof < w)
	{
		man2 = 0;
		fori(0,n)
        {
            if (Dp[i] != Cup[i] && Cup[i] > man2) 
            {
                man1 = i;
                man2 = Cup[i];
            }
        }

		initial = Dp[man1];
        finish = Dp[man1] + w - restof;
		Dp[man1] = min(Cup[man1], finish);
		restof += Dp[man1] - initial;
	}
	fori(0,n) 
    {
        cout << Dp[i] << " ";
    }
}


int32_t main()
{
    config();
    int t = 1;
    while(t--) solve();
    return 0;
}
