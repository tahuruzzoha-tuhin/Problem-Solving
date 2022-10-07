

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define F first
#define S second
#define PB push_back
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define vpp vector<pair<int, pii>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define endl "\n"
#define sz(x) ((int)x.size())
#define all(p) p.begin(), p.end()
#define double long double
#define MAX_CAP 1024
#define print(x) cout << x << endl
#define TLE cerr << "Time Elapsed " << (double)clock() / CLOCKS_PER_SEC << " s" << endl;

#include <unordered_map>

template <class T>
T gcd(T a, T b)
{
  return (b != 0 ? gcd<T>(b, a % b) : a);
}
template <class T>
T lcm(T a, T b)
{
  return (a / gcd<T>(a, b) * b);
}

void config()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r+", stdin);
  freopen("output.txt", "w+", stdout);
#endif
}

void solution()
{

  int n;
  cin >> n;
  int ar[n];
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }
  int Ec = 0, Zc = 1000000000;
  int i = 0;
  while (i < n - 1)
  {
    if (ar[i] == ar[i + 1])
    {
      Zc = min(Zc, i);
      Ec = max(Ec, i);
    }
    ++i;
  }
  if (Zc == Ec || Zc == 1000000000)
  {
    cout << 0 << endl;
    return;
  }
  if (Ec - Zc < 3)
  {
    cout << 1 << endl;
  }
  else
  {
    cout << ((int)(Ec - Zc - 1)) << endl;
  }
}
int32_t main()
{

  // config();
  int n = 1;
  cin >> n;
  while (n--)
  {
    solution();
  }
  return 0;
}
