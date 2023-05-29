#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
const int maxn=2005;

int power(int a,int n){
    int res=1;
    while(n){
        if(n&1) res=res*a%mod;
        a=a*a%mod;n>>=1;
    }
    return res;
}
int n,pre[maxn][maxn];
void solve(){
    cin >> n;
    int cur=1,m=n;
    while(m>cur){m-=cur;cur++;}
    int l=m,r=m,ans=0;
    while(cur>=1){
        ans+=pre[cur][r]-pre[cur][l-1];
        cur--;r=min(r,cur);l=max(l-1,1LL);
    }
    cout << ans << '\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int cur=0;
    for(int i=1;i<=2000;i++){
        for(int j=1;j<=i;j++){cur++;pre[i][j]=pre[i][j-1]+cur*cur;}
    }
    int test=1;cin >> test;
    while(test--) solve();
}
