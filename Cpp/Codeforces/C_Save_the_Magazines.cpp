/****************************************************************\
                   BISMIintAHIR RAHMANIR RAHIM
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
#define aint(p)          p.begin(), p.end()
#define double          long double
#define MAX_CAP         1024
#define print(x)        cout << x << endl
#define fori(v,n)       for(int i=v; i<=n; i++)
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

void config(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r+", stdin);
    // freopen("output.txt", "w+", stdout);
    // #endif
}


int n;
int Mag[2010];

int binarymiddleman(int position, int occurance)
{
	int state = position - 1;
	for (int i = position, j = position; i <= n; i++)
	{
		int move = 0;
		while (move < occurance && j <= n)
		{
			move += Mag[j++];
		}
		if (move != occurance) return n;
		else
		{
			state = max(state, j - i);
			i = j - 1;
			move = 0;
		}
	}
	return state;
}

void solve()
{

	int occurance = 0, answer = n;

	for (int it = 1; it <= n; it++)
	{
		occurance += Mag[it];
		answer = min(answer, binarymiddleman(it + 1, occurance));
	}
    int n, result = 0, middle = -1;
    string title;
    char ps = '1';
    cin >> n >> title;
    vi mag(n);
    for (int i = 0; i < n; ++i) cin >> mag[i];

    for (int i = 0; i < n; ++i) {
        if (title[i] == ps) {
            if (middle > -1) {
                if (mag[i] < mag[middle]) {
                    result += mag[middle];
                    middle = i;
                } else {
                    result += mag[i];
                }
            } else {
                result += mag[i];
            }
        } else {
            middle = i;
        }
    }
    cout << result << endl;
}


int32_t main()
{
    config();
    int t = 1;
    cin >> t;
    while(t--) solve();
    // TLE;
    return 0;
}



