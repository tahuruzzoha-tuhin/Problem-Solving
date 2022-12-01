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
#define Str             string
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
#define forii(v,n,x)       for(int i=v; i<n; i+=x)
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
    int n = 0, m = 0, p = 0, q = 0;
    cin >> n;  Str s;
    vi arr; cin >> s;
    // arr.PB(1);
    forii(0,n-1,1) 
    {
        if(s[i]==s[i+1])
        {
            // arr.PB(1);
            arr.PB(2);
            q = 1;
        }
        else if(arr.size() >= 1 and arr[arr.size()-1] != 1)
        {   
            arr.PB(1);
            q = 1;
        }
    }
    // for(auto x:arr) print(x);
    // if((n % 3 != 2))
    // {
    //     forii(0,n-1,1) 
    //     {
    //         if(arr[i] == 2 and arr[i+1] == 1)
    //         {
    //             p = 1;
    //         }
    //     }
        forii(1, n, 3)
        {
            if( (i + 1 >= n) or (s[i] != s[i+1]))
            {
                p++;
            }
        }

        // for(auto x:arr)
        // {
        //     if(x == 2)
        //     {
        //         p++;
        //     }
        //     if(x == 1)
        //     {
        //         m++;
        //     }
        // }
        // print(p);
        // print(m);
        // print((arr.size()/2));
            // if(arr.size()%2 == 0 and p == arr.size()/2 and m == p)
            // {
            //     print("YES");
            // }
            // else if(arr.size() == p)
            // {
            //     print("NO");
            // }
            // else if(arr.size() == m)
            // {
            //     print("NO");
            // }
            // else if(arr.size()%2 != 0 and p == (arr.size()/2)+1 and m == (p-1))
            // {
            //     print("YES");
            // }
            // else 
            // {
            //     print("NO");
            // }
    // }
    if(p == 0 )
    {
        print("YES");
    }
    else
    {
        print("NO");
    }

}
