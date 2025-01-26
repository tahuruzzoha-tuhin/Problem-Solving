/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define lli             long long int
#define F               first
#define S               second
#define PB              push_back
#define si              set <lli>
#define vi              vector <lli>
#define pii             pair <lli, lli>
#define vpii            vector <pii>
#define vpp             vector <pair <lli, pii>>
#define mii             map <lli, lli>
#define mpi             map <pii, lli>
#define spi             set <pii>
#define ll              %lld
#define endl            "\n"
#define vsz(x)          ((lli) x.size())
#define all(p)          p.begin(), p.end()
#define rall(p)         p.rbegin(), p.rend()
#define sorta(v)        sort(all(v))
#define sortd(v)        sort(rall(v))
#define double          long double
#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;

ll const MAX_CAP = 1e9;
ll const MOD = 1e9 + 7;
ll const MAX_RNG = 1024;

template <class T> void vin(vector<T>& v) 
{ 
    for(ll i=0; i<vsz(v); i++) 
    {
        cin >> v[i];
    } 
}
template <class T> void vout(const vector<T>& v) 
{ 
    for(ll i=0; i<vsz(v); i++) 
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


ll globalArr[MAX_RNG];

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
bool binary_search(ll arr[], ll n, ll key)
{
    ll left = 0;
    ll right = n-1;
    ll mid;

    while(left <= right)
    {
        ll mid = (left+right)/2;

        if(arr[mid] == key)
        {
            return true;
        }
        else if(arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return false;
}

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
 
    for (ll i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

void Accepted();


int32_t main()
{
    config();
    ll test_kase = 1;
    // scanf("%lld", &test_kase);
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
    ll n = 0, a = 0, b = 0, q = 6;
    
    scanf("%lld %lld %lld", &n, &a, &b); 
    
    ll Dormitory = a*b;
   
    if(n*q <= Dormitory ) {
       
        printf("%lld\n%lld %lld\n", Dormitory, a, b);
    
    } else {
        
        bool flag = 0;
        
        if(a>b){
            swap(a,b);
            flag = 1;
        }
        
        ll Area = 1e18, side1, side2, room;
        
        for(ll i=a; i*i <= q*n; i++){

            room = 6*n / i;

            if(room*i < 6*n) {
                room++;
            }

            if(room < b) {
                continue;
            }

            if(room*i < Area) {
                Area = room*i;
                side1 = i;
                side2 = room;
            }
        }

        if(flag) {
            swap(side1, side2);
        }

        printf("%lld \n%lld %lld\n", Area, side1, side2);
    }
    
}
