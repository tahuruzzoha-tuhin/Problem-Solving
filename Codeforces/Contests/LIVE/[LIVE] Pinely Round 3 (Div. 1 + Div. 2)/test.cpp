#pragma GCC optimize(3,"Ofast","inline")
#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;
#define ll long long
const int N=300005;
const ll mod=998244353;
ll qpow(ll a,ll b){
  ll ans=1;
  if(b==0)
  return 1;
  if(b%2)
  ans=a;
  ll t=qpow(a,b/2);
  return t*t%mod*ans%mod;
}
ll inv(ll a){
  return qpow(a,mod-2);
}
ll gcd(ll a,ll b){
  if(a<0)
  a=-a;
  if(b<0)
  b=-b;
  while(a!=0&&b!=0){
    if(a>b)
    a%=b;
    else
    b%=a;
  }
  return a+b;
}
ll a[N],b[N];
 
void solve(){
  ll n,k;
  cin>>n>>k;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    a[i]-=k;
  }
  if(n==1){
    cout<<"0\n";
    return;
  }
  ll g=0;
  for(int i=1;i<=n;i++){
    g=gcd(g,a[i]);
  }
  if(g==0){
    cout<<"0\n";
    return;
  }
  ll flag=1,ans=0;
  for(int i=1;i<=n;i++){
    ll cur=a[i]/g-1;
    if(cur<0){
      flag=0;
      ans=0;
      break;
    }
    else{
      ans+=cur;
    }
  }
  if(flag&&g+k>0){
    cout<<ans<<'\n';
    return;
  }
  flag=1;
  ans=0;
  for(int i=1;i<=n;i++){
    ll cur=-a[i]/g-1;
    if(cur<0){
      flag=0;
      ans=0;
      break;
    }
    else{
      ans+=cur;
    }
  }
  if(flag&&-g+k>0){
    cout<<ans<<'\n';
    return;
  }
  cout<<"-1\n";
  return;
  
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int t0;
  cin>>t0;
  for(int t=0;t<t0;t++){
    solve();
  }
}
