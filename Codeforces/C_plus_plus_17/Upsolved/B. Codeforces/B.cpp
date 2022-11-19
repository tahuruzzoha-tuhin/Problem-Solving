// Problem: B. Avoid Local Maximums
// Contest: Codeforces - Codeforces Round #772 (Div. 2)
// URL: http://codeforces.com/contest/1635/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)





#include <bits/stdc++.h>
using namespace std;

#define int             long long int
#define F               first
#define S               seconde
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
#define MAX_CAP         1024
#define print(x)        cout << x << endl


#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;




template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}



void solve()
{
	int n;
	cin >> n;
	int a[n]={0};
	int count = 0;
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i =1; i<n-1; i++){
		if( a[i] > a[i-1] && a[i] > a[i+1]){
			count++;
			if( i < (n-2)){
				a[i+1] = max(a[i], a[i+2]);
			}
			else{
				a[i+1] = a[i];
			}
		}

	}
	cout << count << endl;
	for(int i=0; i<n; i++){
		cout << a[i] << ' ';
	}
	cout << endl;
	
    

}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;

    cin >> t;


    while(t--) solve();

    TLE;



    return 0;
}




