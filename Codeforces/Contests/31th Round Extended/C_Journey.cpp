/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define LL              long long
#define F               first
#define S               second
#define PB              push_back
#define si              set <LL>
#define vi              vector <LL>
#define pii             pair <LL, LL>
#define vpii            vector <pii>
#define vpp             vector <pair <LL, pii>>
#define mii             map <LL, LL>
#define mpi             map <pii, LL>
#define spi             set <pii>
#define list            list <LL>
#define endl            "\n"
#define vsz(x)          ((LL) x.size())
#define all(p)          p.begin(), p.end()
#define rall(p)         p.rbegin(), p.rend()
#define sorta(v)        sort(all(v))
#define sortd(v)        sort(rall(v))
#define double          long double
#define TLE cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;

LL const MAX_CAP = 1e9;
LL const MOD = 1e9 + 7;
LL const MAX_RNG = 100000;
LL Nth; double answer = 0.0;
vi globalArr[MAX_RNG];

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
bool binary_search(LL arr[], LL n, LL key)
{
    LL left = 0, right = n-1, mid;
    while(left <= right)
    {
        LL mid = (left+right)/2;
        if(arr[mid] == key) return true;
        else if(arr[mid] > key) right = mid - 1;
        else left = mid + 1;
    }
    return false;
}

bool isPrime(LL n)
{
    if (n <= 1) return false;for (LL i = 2; i < n; i++) 
    if (n % i == 0) return false; return true;
}

string read_string() {
    string s; unsigned int uc; int c;
    while ((uc = (unsigned int)getchar()) <= 32u);
    if (uc < 256u) s.push_back((char)uc);
    while ((c = getchar()) > 32) s.push_back((char)c);
    return s;
}

void Journey(LL at, LL parent, double probability, LL depth) {

    LL below = 0;
    for(LL i:globalArr[at]) {
        if(i!=parent){
            below++;
        }
    }

    for(LL i:globalArr[at]) {
        if(i!=parent) {
            Journey(i, at, probability/below, depth+1);
        }
    }
    if(below == 0) {
        answer += probability*depth;
    }
}



void Accepted();


int32_t main()
{
    config();
    LL test_kase = 1;
    while(test_kase--) Accepted();
    return 0;
}

void Accepted()
{
    LL n=0, m=0, p=0, q=0, r=0;
    LL a=0, b=0, c=0, d=0, e=0, f=0;
    LL ans=0, cnt=0, zero=0, one=0;
    LL first=0, second=0, last=0, middl=0;
    LL i=0, j=0, k=0, l=0, sum=0, len=0;
    string St, Sp="";

    scanf("%lld", &Nth); 
    for(LL i=0; i<Nth-1; i++) {
        scanf("%lld %lld", &p, &q);
        p--; q--;
        globalArr[p].PB(q);
        globalArr[q].PB(p);
    }

    Journey(0, 0 , 1.0, 0);
    printf("%0.15Lf\n", answer);
    
}
