

// #include <bits/stdc++.h>
// using namespace std;

// #define int long long int
// #define F first
// #define S second
// #define PB push_back
// #define si set<int>
// #define vi vector<int>
// #define pii pair<int, int>
// #define vpii vector<pii>
// #define vpp vector<pair<int, pii>>
// #define mii map<int, int>
// #define mpi map<pii, int>
// #define spi set<pii>
// #define endl "\n"
// #define sz(x) ((int)x.size())
// #define all(p) p.begin(), p.end()
// #define double long double
// #define MAX_CAP 1024
// #define print(x) cout << x << endl
// #define TLE cerr << "Time Elapsed " << (double)clock() / CLOCKS_PER_SEC << " s" << endl;

// #include <unordered_map>

// template <class T>
// T gcd(T a, T b)
// {
//     return (b != 0 ? gcd<T>(b, a % b) : a);
// }
// template <class T>
// T lcm(T a, T b)
// {
//     return (a / gcd<T>(a, b) * b);
// }

// void config()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r+", stdin);
//     freopen("output.txt", "w+", stdout);
// #endif
// }

// const int mod = 32768;
// double begintime, endtime;
// int n, front, app[mod + 8];

// void solution()
// {

//     vector<int> rest[mod + 8];
//     queue<int> qset;
//     memset(app, -1, sizeof(app));
//     for (int i = 0; i < mod; i++)
//     {
//         int e = (i + 1) % mod;
//         int f = (i * 2) % mod;
//         rest[e].push_back(i);
//         rest[f].push_back(i);
//     }
//     app[0] = 0;
//     qset.push(0);
//     while (!qset.empty())
//     {
//         front = qset.front();
//         qset.pop();
//         for (int tmp : rest[front])
//             if (app[tmp] == -1)
//             {
//                 app[tmp] = app[front] + 1;
//                 qset.push(tmp);
//             }
//     }
//     // for(auto sd:app) cout << sd << ' ';
//     cin >> n;
//     while (n--)
//     {
//         cin >> front;
//         cout << app[front] << ' ';
//     }
// }
// int32_t main()
// {

//     // config();
//     int n = 1;
//     // cin >> n;
//     while (n--)
//     {
//         solution();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    int mx=0;
    vector<int> v(n);
    for(auto &x:v){
      scanf("%d",&x);
      mx=max(mx,x);
    }
    ll res=1e18;
    for(int h=mx;h<=mx+3;++h){
      ll two=0, one=0;
      for(auto &x:v){
        two += (h-x)/2;
        one += (h-x)%2;
      }
      ll all=one+two*2;
      ll days=all/3*2;
      if(all%3==1)
        ++days;
      if(all%3==2)
        days+=2;
      res=min(res,max(one*2-1, days));
    }
    printf("%lld\n",res);
  }
  return 0;
}