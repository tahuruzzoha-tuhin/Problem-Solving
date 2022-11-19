
/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/


#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define F               first
#define S               second
#define PB              push_back
#define si              set <int>
#define vi              vector <int>
#define pii             pair <int, int>
#define vpii            vector <pii>
#define vpp             vector <pair <int, pii>>
#define mii             map <int, ll>
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
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define rep1(i, n) for(int i = 1; i <= (int)n; i++)
#define rep_se(i, s, e) for(int i = s; i <= (int)e; i++)

template<typename T>
void Vin(vector<T> &v){
  rep(i, v.size()) cin >> v.at(i);
}

// template<typename T>
// void vec2_in(vector<vector<T>> &v){
//   rep(i, v.size()) Vin(v.at(i));
// }


/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/
/**

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
        cout << v[i] << " /n"[i + 1 == vsz(v)];
    } 
}
*/
int Vari = 0;
int Root = 0;
int First;
bool is_first = true;
vector<int> a;
/*
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
    file();

}


void Accepted()
{
    int n = 0, m = 0, Perm = 1, mutation = 0, Lost = INT_MIN;
    cin >> n >> m;
    si uniq;

    for(int i=0; i<n; i++)
    {
        cin>>globalArr[i];
        uniq.insert(globalArr[i]);
    }


    while(Perm)
    {
        if(uniq.find(Perm)!=uniq.end())
        {
            Perm++;
            continue;
        }
        mutation+=Perm;

        if(mutation>m)
        {
            cout<<"NO"<<endl;
            break;
        }

        for(int i=0; i<n; i++)
        {
            if(Lost<globalArr[i])
            Lost=globalArr[i];
        }

        uniq.insert(Perm);
        if(mutation==m)
        {
            int flag=0;
            for(int i=1; i<=Lost; i++)
            {
                if(uniq.find(i)!=uniq.end())
                {

                    continue;
                }
                flag=1;
                break;
            }
            if(!flag) 
            {
                print("YES");
            }
            else
            {
                print("NO");
            } 
            break;
        }
        Perm++;
    }

}



int32_t main()
{
    config();
    int test_kase = 1;
    cin >> test_kase;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}

**/




void Accepted();
int main(void){

  int n;
  cin >> n;

  a = vector<int>(n);
  Vin(a);

  bool is_first = true;

  cin >> First;
  while(Vari < First) Accepted();
  return 0;
}

void Accepted()
{
    mii Points;
    while(Vari < First)
    {
        int q, i, x;
        cin >> q >> i;
        Vari++;

        switch(q)
        {
            case 1:
                is_first = false;
                Root = i;
                return;
            case 2:
                cin >> x;
                if(Points.count(i))
                {
                    Points[i] += x;
                } 
                else 
                {
                    Points[i] = x;
                }
                break;
            case 3:
                long res = (is_first ? a.at(i-1) : Root);
                if(Points.count(i))
                {
                    res += Points[i];
                }
                cout << res << endl;
                break;
        }
    }

    return;
}
