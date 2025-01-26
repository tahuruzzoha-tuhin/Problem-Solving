/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int             long int
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
    cout << setprecision(15) << fixed;
    // file();

}

int cnt;
void Accepted();
int Odd(int k, int cnt);
int Max(int n3[], int n);
int Even(int k, int cnt)
{
    k /= 2;
    cnt++;
    if(k==1)
    {
        return cnt;

    }
    else if(k%2 == 0)
    {
        return Even(k, cnt);
    }
    else if(k%2 != 0)
    {
        return Odd(k, cnt);
    }
    return cnt;
}

int Odd(int k, int cnt)
{
    k = k*3+1;
    cnt++;
    if(k == 1)
    {
        return cnt;
    }
    else if(k%2 == 0)
    {
        return Even(k, cnt);
    }
    else if(k%2 != 0)
    {
        return Odd(k, cnt);
    }
    return cnt;
}

int Max(int n3[], int n)
{
    int m = n3[0];
    for(int i=0; i<n; i++)
    {
        if(n3[i] > m)
        {
            m = n3[i];
        }
    }
    return m;
}


int32_t main()
{
    config();
    int test_kase = 1;
    // cin >> test_kase;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

void Accepted()
{
	int a,b,i,n,s,d,j,k;
	while(scanf("%ld%ld",&a,&b)==2)
	{
		if(a>0 && a<1000000 && b>0 && b< 1000000)
		{
			d=0;
			j=a;
			k=b;
			if(a>b)
			{
				j=b;
				k=a;
			}
			for(i=j;i<=k;i++)
			{
				n=i;
				s=1;
				while(n!=1)
				{
					if(n%2==0)
					{
						n=n/2;
						s++;
					}
					else
					{
						n=3*n+1;
						s++;
					}
				}
				if(d<s)
					d=s;
			}
			printf("%ld %ld %ld\n",a,b,d);
		}
	}
}
