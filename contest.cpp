

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
//   return (b != 0 ? gcd<T>(b, a % b) : a);
// }
// template <class T>
// T lcm(T a, T b)
// {
//   return (a / gcd<T>(a, b) * b);
// }

// void config()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(nullptr);
//   cout.tie(nullptr);
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r+", stdin);
//   freopen("output.txt", "w+", stdout);
// #endif
// }

// void solution()
// {
//     int p, q, i;
//     cin >> p >> q;
//     int arr[p];
//     for(i=0; i<p; i++) cin >> arr[i];
//     for(i=0; i<p; i++) cout << arr[i] << " ";
//     cout << endl;
//     for(i=0; i<q; i++){
//       cout << i << " ";
//       for(int j=0; j<q; j++){
//         cout << j << " ";
//       }
//       cout << "*" << endl;;
//     }
//     cout << endl;
// }
// int32_t main()
// {

// //   config();
//   int n = 1;
//   cin >> n;
//   while (n--)
//   {
//     solution();
//   }
//   return 0;
// }




#include <iostream>
#include <vector>
#include <stack>

int main(){

    std::ios_base::sync_with_stdio(false);

    int64_t n; std::cin >> n;
    std::vector<int64_t> a(n + 2);
    for(int64_t p = 1; p <= n; p++){std::cin >> a[p];}

    int64_t total(0);
    std::stack<int64_t> s; s.push(0);
    for(long p = 0; p <= n + 1; p++){
        while(a[s.top()] > a[p]){
            int64_t pos = s.top();
            s.pop();
            total -= (p - pos) * (pos - s.top()) * a[pos];
        }
        s.push(p);
    }

    s.push(0);
    a[0] = a[n + 1] = 1e18;
    for(long p = 1; p <= n + 1; p++){
        while(a[s.top()] < a[p]){
            int64_t pos = s.top();
            s.pop();
            total += (p - pos) * (pos - s.top()) * a[pos];

        }
        s.push(p);
    }
    
    std::cout << total << std::endl;

    return 0;
}