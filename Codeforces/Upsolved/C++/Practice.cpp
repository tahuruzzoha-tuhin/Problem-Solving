// /****************************************************************\
//                    BISMILLAHIR RAHMANIR RAHIM
// ****************************************************************
//            ------------------------------------------
// \****************************************************************/

// #include <bits/stdc++.h>
// using namespace std;

// #define int             long long int
// #define F               first
// #define S               second
// #define PB              push_back
// #define si              set <int>
// #define vi              vector <int>
// #define pii             pair <int, int>
// #define vpii            vector <pii>
// #define vpp             vector <pair <int, pii>>
// #define mii             map <int, int>
// #define mpi             map <pii, int>
// #define spi             set <pii>
// #define endl            "\n"
// #define sz(x)           ((int) x.size())
// #define all(p)          p.begin(), p.end()
// #define double          long double
// #define MAX_CAP         1024
// #define print(x)        cout << x << endl
// #define TLE             cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;


// void config(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr); cout.tie(nullptr);
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r+", stdin);
//     freopen("output.txt", "w+", stdout);
//     #endif
// }



// template< class T > T gcd(T a, T b)
// {
//     return (b != 0 ? gcd<T>(b, a%b) : a);
// }
// template< class T > T lcm(T a, T b)
// {
//     return (a / gcd<T>(a, b) * b);
// }



// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     // cout << __gcd(n,m) << endl;
//     // cout << gcd(n,m) << endl;

//     vi arr, brr, crr;
//     for(int i=1; i<=n; i++)
//     {
//         if(n%i == 0)
//         {
//             arr.PB(i);
//         }
//     }

//     for(int i=1; i<=m; i++)
//     {
//         if(m%i == 0)
//         {
//             brr.PB(i);
//         }
//     }

//     sort(arr.begin(), arr.end());
//     sort(brr.begin(), brr.end());

//     int mm = brr.size(), x = arr.size();
//     for(int i=0; i<mm ; i++)
//     {
//         int p = brr[i];
//         int l = 0; 
//         int r = x - 1;
//         while(l <= r)
//         {
//             int m = (l+r)/2;
//             if(arr[m] == p)
//             {
//                 crr.PB(p);
//                 // print(p);
//                 break;
//             }
//             if(arr[m] < p)
//             {
//                 l = m+1;
//             }
//             if(arr[m] > p)
//             {
//                 r = m-1;
//             }
//         }
//     }
//     sort(crr.begin(), crr.end());
//     // cout << crr[crr.size() - 1] << endl;

//     // cout << "1 "[false] << "2"[false]<< endl;

//     cout << (1<<16) << endl;

// }


// int32_t main()
// {
//     //config();
//     int t = 1;
//     // cin >> t;
//     while(t--) solve();
//     // TLE;
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;

// #define LSOne(S) ((S) & -(S))

// int N;
// double dist[10][20], memo[1<<16];

// double dp(int mask){
//     double &ans = memo[mask];
//     if(ans > -0.5) 
//     {
//         return ans;
//     }
//     if(mask == 0) 
//     {
//         return 0;
//     }
//     ans = 1e9;
//     int two_pow_p1 = LSOne(mask);
//     int p1 = __builtin_ctz(two_pow_p1);
//     int m = mask - two_pow_p1;
//     while(m)
//     {
//         int two_pow_p2 = LSOne(m);
//         int p2 = __builtin_ctz(two_pow_p2);
//         ans = min(ans, dist[p1][p2] + dp(mask^two_pow_p1^two_pow_p2));
//         m -= two_pow_p2;
//     }
//     return ans;
// }

// int main() 
// {
//     int CaseNo = 0, x[20], y[20];
//     while(scanf("%d", &N), N)
//     {
//         for(int i=0; i<2*N; ++i)
//         {
//             scanf("%*s %d %d", &x[i], &y[i]);
//         }
//         for(int i=0; i<2*N-1; ++i) 
//         {
//             for(int j=i+1; j<2*N; ++j)
//             {
//                 dist[i][j] = dist[j][i] = hypot(x[i]-x[j], y[i]-y[j]);
//             }
//         }
//         for(int i=0; i<(1<<16); ++i)
//         {
//             memo[i] = -1.0;
//         }
//         printf("Case %d: %.2lf\n", ++CaseNo, dp((1<<(2*N))-1));
//     }
//     return 0;
// }


void solve() {
    int n;
    cin >> n;
 
    int case1 = 0;
    int case2 = 0;
    rep(i, n - 2) {
        case1 ^= i;
        case2 ^= (i + 1);
    }
 
    ll last = ((ll)1 << 31) - 1;
    if (case1 != 0) {
        rep(i, n - 2) {
            cout << i << " ";
        }
        cout << last << " " << (case1 ^ last) << "\n";
    } else {
        rep(i, n - 2) {
            cout << i + 1 << " ";
        }
        cout << last << " " << (case2 ^ last) << "\n";
    }
}