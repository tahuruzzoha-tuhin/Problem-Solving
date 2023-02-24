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
#define vsz(x)          ((int) x.size())
#define all(p)          p.begin(), p.end()
#define rall(p)         p.rbegin(), p.rend()
#define sorta(v)        sort(all(v))
#define sortd(v)        sort(rall(v))
#define double          long double
#define MAX_CAP         1e9
#define MAX_RNG         1024
#define print(x)        cout << x << endl
#define fori(v,n)       for(int i=v; i<n; i++)
#define ford(n,v)       for(int i=n; i>v; i--)
#define fora(i, a, n)   for (int i = a; i < n; ++i)
#define forad(i, a, n)  for (int i = a; i > n; --i)
#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;
template <class T> void vin(vector<T>& v) 
{ 
    fori(i, vsz(v)) 
    {
        cin >> v[i];
    } 
}
template <class T> void vout(const vector<T>& v) 
{ 
    fori(i, sz(v))
    {
        cout << v[i] << " \n"[i + 1 == vsz(v)];
    } 
}
template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}


int globalArr[MAX_RNG];

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


int countDigits(int l)
{
	if (l >= 1000000000000000000L)
		return 19;
	if (l >= 100000000000000000L)
		return 18;
	if (l >= 10000000000000000L)
		return 17;
	if (l >= 1000000000000000L)
		return 16;
	if (l >= 100000000000000L)
		return 15;
	if (l >= 10000000000000L)
		return 14;
	if (l >= 1000000000000L)
		return 13;
	if (l >= 100000000000L)
		return 12;
	if (l >= 10000000000L)
		return 11;
	if (l >= 1000000000L)
		return 10;
	if (l >= 100000000L)
		return 9;
	if (l >= 10000000L)
		return 8;
	if (l >= 1000000L)
		return 7;
	if (l >= 100000L)
		return 6;
	if (l >= 10000L)
		return 5;
	if (l >= 1000L)
		return 4;
	if (l >= 100L)
		return 3;
	if (l >= 10L)
		return 2;
	return 1;
}

void Accepted();


int32_t main()
{
    config();
    int test_kase = 1;
    // cin >> test_kase;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    int n = 0, s = 0, m = 0, p = INT_MIN, q = INT_MAX;

    cin >> m >> s; 
    vi min_nums, max_nums; int x = s;
    string smallest, largest;

    if( (s+9-1)/9 > m or (m>1 and s == 0))
    {
        cout << -1 << " " << -1 << endl;
        return;
    }
    if( s == 1)
    {
        string res = "1";
        fori(0, m-1)
        {
            res += "0";
        }
        cout << res << " " << res << endl;
        return;
    }
    while( x > 9 )
    {
        min_nums.PB(9);
        max_nums.PB(9);
        x -= 9;
    }
    max_nums.PB(x);
    while(max_nums.size() < m)
    {
        max_nums.PB(0);
    }

    if(min_nums.size() < m-1 and x > 1)
    {
        min_nums.PB(x-1);
        x = 1;
    }
    while( min_nums.size() < m-1)
    {
        min_nums.PB(0);
    }

    min_nums.PB(x);

    ford(m-1, -1)
    {
        smallest += to_string(min_nums[i]);
    }
    fori(0, m)
    {
        largest += to_string(max_nums[i]);
    }

    cout << smallest << " " << largest << endl;    

}
