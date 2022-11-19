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

template <class T> using Priority_back = std::priority_queue<T>;

template <class T> using Priority_front = std::priority_queue<T, vector<T>, greater<T>>;

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
    // file();

}

void Accepted();


int32_t main()
{
    config();
    int test_kase = 1;
    cin >> test_kase;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    int n, h; cin >> n >> h;
    vi Hum(n);
    for(auto &i : Hum) 
    {
        cin >> i;
    }

    auto sol = [&](vi power, int astronauts, vi absorb) -> int {

        Priority_front<int> pq(power.begin(), power.end());
        int ans = 0;

        while (!pq.empty()) 
        {
            int x = pq.top();
            if (x < astronauts) 
            {
                astronauts += x / 2;
                ans++;
                pq.pop();
                continue;
            } 
            else if (!absorb.empty()) 
            {
                int m = absorb.back();
                absorb.pop_back();
                astronauts *= m;
                continue;
            } 
            else 
            {
                break;
            }
        }
        return ans;
    };

    int res = 0;
    vi muilti = {2, 2, 3};
    do {
        int r1 = sol(Hum, h, muilti);
        res = max(res, r1);
    } while (next_permutation(muilti.begin(), muilti.end()));

    print(res);

}
