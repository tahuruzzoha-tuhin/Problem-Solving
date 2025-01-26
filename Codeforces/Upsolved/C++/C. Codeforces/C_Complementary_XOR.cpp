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
    int n = 0, m = 0, p = 0, q = 0;
    cin>>n;
    char s[n];
    fori(0,n)
    {
        cin>>s[i];
    }

    char b[n];
    fori(0,n)
    {
        cin>>b[i];
    }
    int comp[n];
    fori(0,n)
    {
        comp[i]=0;
    }
    vector<vector<int>> XOR;
    XOR.PB({});
    XOR.PB({});
    
    fori(0,n)
    {
        int st=i;
        while(i<n && s[i]=='1')
        i++;
        if(st!=i){
            XOR[0].PB(st+1);
            XOR[1].push_back(i);
            comp[0]++;
            comp[st]--;
            comp[i]++;
        }
    }

    int point=0;
    int last_point=0;
    char rest[n];
    
    fori(0,n)
    {
        last_point+=comp[i];
        if((b[i]=='0' && last_point%2==1) || (b[i]=='1' && last_point%2==0))
        {
        rest[i]='1';
        }
        else 
        rest[i]='0';
    }

    fori(0,n-1)
    {
        if(rest[i]!=rest[i+1])
        point=1;
    }

    if(point==0)
    {
       cout<<"YES"<<endl;
       if(rest[0]=='1')
       {
           XOR[0].PB(1);
           XOR[1].PB(n);
           XOR[0].PB(1);
           XOR[1].PB(1);
           XOR[0].PB(2);
           XOR[1].PB(n);
       }
        cout<<XOR[0].size()<<endl;

        for(int i=0; i<XOR[0].size(); i++)
        {
            cout<<XOR[0][i]<<" "<<XOR[1][i]<<endl;
        }


   }
    else cout<<"NO"<<endl;

}


