#include <iostream>

#define FI freopen ("input.txt", "r", stdin)
#define FO freopen ("output.txt", "w", stdout)


using namespace std;
 
int n,m,a,b,p,q;
int ans1,ans2;
 
int main() {
    cin>>a>>b>>p>>q>>n;
    int k = a*(p-1) + b*(q-1);
    ans1 += n-k;
    if(ans1<0) ans1 = 0;
    if(p>q) {
        swap(p,q);
        swap(a,b);
    }
    ans2 = n/p;
    if(ans2>a) {
        ans2 = a;
        n -= a*p;
        ans2 += n/q;
    }
    cout << ans1 << ' ' << ans2 << endl;
    return 0;
}