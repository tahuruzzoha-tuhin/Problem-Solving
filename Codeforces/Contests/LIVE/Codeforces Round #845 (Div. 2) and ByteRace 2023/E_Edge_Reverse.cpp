// /****************************************************************\
//                    BISMILLAHIR RAHMANIR RAHIM
// ****************************************************************
//                AUTHOR NAME: MD. TAHURUZZOHA TUHIN
// \****************************************************************/

// #include <bits/stdc++.h>
// using namespace std;

// #define lli             long long int
// #define F               first
// #define S               second
// #define PB              push_back
// #define si              set <lli>
// #define vi              vector <lli>
// #define pii             pair <lli, lli>
// #define vpii            vector <pii>
// #define vpp             vector <pair <lli, pii>>
// #define mii             map <lli, lli>
// #define mpi             map <pii, lli>
// #define spi             set <pii>
// #define list            list <lli>
// #define endl            "\n"
// #define vsz(x)          ((lli) x.size())
// #define all(p)          p.begin(), p.end()
// #define rall(p)         p.rbegin(), p.rend()
// #define sorta(v)        sort(all(v))
// #define sortd(v)        sort(rall(v))
// #define double          long double
// #define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;

// lli const MAX_CAP = 1e9;
// lli const MOD = 1e9 + 7;
// lli const MAX_RNG = 1024;
// lli globalArr[MAX_RNG];

// void file()
// {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r+", stdin);
//     freopen("output.txt", "w+", stdout);
//     #endif
// }

// void config()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr); cout.tie(nullptr);
//     cout << setprecision(15) << fixed;
//     // file();

// }
// bool binary_search(lli arr[], lli n, lli key)
// {
//     lli left = 0, right = n-1, mid;
//     while(left <= right)
//     {
//         lli mid = (left+right)/2;
//         if(arr[mid] == key) return true;
//         else if(arr[mid] > key) right = mid - 1;
//         else left = mid + 1;
//     }
//     return false;
// }

// bool isPrime(lli n)
// {
//     if (n <= 1) return false;for (lli i = 2; i < n; i++) 
//     if (n % i == 0) return false; return true;
// }

// string read_string() {
//     string s; unsigned int uc; int c;
//     while ((uc = (unsigned int)getchar()) <= 32u);
//     if (uc < 256u) s.push_back((char)uc);
//     while ((c = getchar()) > 32) s.push_back((char)c);
//     return s;
// }

// void Accepted();


// int32_t main()
// {
//     config();
//     lli test_kase = 1;
//     scanf("%lld", &test_kase);
//     while(test_kase--) Accepted();
//     // TLE;
//     return 0;
// }

// void Accepted()
// {
//     lli n=0, m=0, p=0, q=0, r=0;
//     lli a=0, b=0, c=0, d=0, e=0, f=0;
//     lli ans=0, cnt=0, zero=0, one=0;
//     lli first=0, second=0, last=0, middl=0;
//     lli i=0, j=0, k=0, l=0, sum=0, len=0;
//     string St, Sp="";

//     scanf("%lld", &n); 
//     scanf("%lld %lld", &n, &m);
//     St = read_string();

//     vi arr(n);
//     for(lli i=0; i<n; i++) {
//         scanf("%lld", &arr[i]);
//     }
    
//     for(lli i=0; i<n; i++) {
//         printf("%lld ", arr[i]);
//     }
    
// }


#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
const int M = 2e5 + 5;
const int INF = 1e9;

int t, n, m;
vector<pair<int, int>> adj[N];
bool vis[N];
int dist[N];
bool rev[M];
int maxw = -1;

void dijkstra(int s) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});
    dist[s] = 0;
    while (!q.empty()) {
        int v = q.top().second; q.pop();
        if (vis[v]) continue;
        vis[v] = true;
        for (int i = 0; i < adj[v].size(); i++) {
            int u = adj[v][i].first, w = adj[v][i].second;
            if (dist[u] > dist[v] + w) {
                dist[u] = dist[v] + w;
                q.push({dist[u], u});
                if (w > maxw) maxw = w;
                rev[i] = true;
            }
        }
    }
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
            dist[i] = INF;
            vis[i] = false;
        }
        maxw = -1;
        for (int i = 0; i < m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            rev[i] = false;
        }
        dijkstra(1);
        int cnt = 0;
        for (int i = 1; i <= n; i++) if (dist[i] == INF) cnt++;
        if (cnt > 0) cout << -1 << endl;
        else cout << maxw << endl;
    }
    return 0;
}