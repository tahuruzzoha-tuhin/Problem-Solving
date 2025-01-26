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
#define st              stack <char>
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
#define fori(v,n, inc)       for(int i=v; i<n; i+=inc)
#define ford(n,v)       for(int i=n; i>v; i--)
#define fora(i, a, n)   for (int i = a; i < n; ++i)
#define forad(i, a, n)  for (int i = a; i > n; --i)
#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;
// template <class T> void vin(vector<T>& v) 
// { 
//     fori(i, vsz(v)) 
//     {
//         cin >> v[i];
//     } 
// }
// template <class T> void vout(const vector<T>& v) 
// { 
//     fori(i, sz(v))
//     {
//         cout << v[i] << " \n"[i + 1 == vsz(v)];
//     } 
// }
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
int Exist[27][2];

int ExistOrNot(int n, int m, int p, int l, int r){
    if ( n==0 and m==0 and p==0)
    {
        if(l==1)
		{
            return 0;
        }
        return 1;
    }
    if(Exist[r][l] != -1)
    {
	    return Exist[r][l];
    }
    int xoR1 = ((n%2)^1) + ((m%2)^1) + l;
    int XoR2 = ((n%2)^0) + ((m%2)^0) + l;
    int res=0;

    if((xoR1%2)==(p%2)^1)
    {   
        int recur = ExistOrNot(n/2,m/2,p/2,xoR1/2,r+1);
        res = max(res, recur);
    }
    if(XoR2%2==(p%2)^0)
    {
        int recur = ExistOrNot(n/2,m/2,p/2,XoR2/2,r+1);
        res = max(res, recur); 
    }
    return Exist[r][l] =res;
    
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
    int n = 0, m = 0, p = 0, q = 0, o = 0; char ckr;
    /*cin >> n;*/ int arr[n]; string str;
    // /* fori(0,n) cin >> arr[i];*/ cin >> str;
    st s;
    // // fori(0,n) cout << arr[i] << " ";
    s.push(str[0]);
    fori(1, n, 1)
    {
        if(s.top() == str[i])
        {
            s.pop();
            s.push(0);
        }
        else 
        {
            s.push(str[i]);
        }
    }
    cin >> n >> m >> p;
    // if(n+m == p)
    // {
    //     print("YES");
    //     return;
    // }
    // else
    // {
    //     int flg = 0;
    //     fori(1, 1e5/2,1)
    //     {
    //         flg = 0;
    //         if((n^i) + (m^i) == (p^i))
    //         {
    //             print("YES");
    //             return;
    //         }
    //         else
    //         {
    //             flg = 1;
    //         } 
    //     }
    //     if(flg)
    //     {
    //         print("NO");
    //     }
    // }
    // else if((n^1) + (m^1) == (p^1))
    // {
    //     print("YES");
    // }
    // else if((n^2) + (m^2) == (p^2))
    // {
    //     print("YES");
    // }
    // else if((n^3) + (m^3) == (p^3))
    // {
    //     print("YES");
    // }
    // else if((n^4) + (m^4) == (p^4))
    // {
    //     print("YES");
    // }
    // else
    // {
    //     print("NO");
    // }
    // cin >> n>>m>>p;
    for(int l=0;l<27;l++) {
        Exist[l][0] = Exist[l][1] = -1;
    }
    
    if(ExistOrNot(n, m, p, o, o)) 
    {
        print("YES");
    }
    else 
    {
        print("NO");
    }
    // if(s.size() == 1)
    // {
    //     print("YES");
    // }
    // else
    // {
    //     ckr = s.top(); s.pop();
    //     while(!s.empty() && s.top() == ckr)
    //     {
    //         s.pop();
    //     }
    //     if(s.empty())
    //     {
    //         print("YES");
    //     }
    //     else
    //     {
    //         print("NO");
    //     }

    // }
}

