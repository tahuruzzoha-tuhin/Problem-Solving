

#include <bits/stdc++.h>
using namespace std;


typedef long long ll;




// void solve()
// {
	// int x,y;
	// cin >> x >> y;
// 	
	// double ans = sqrt(pow((0-x),2)+pow((0-y),2));
	// int p = ans;
// 	
	// if(x==0 && y==0){
		// cout << 0 << endl;
	// }
	// else if (ans == p ){
		// cout << 1 << endl;
	// }
	// else if(ans != p){
		// cout << 2 << endl;
	// }
// 
//     
// 
// }
void solve() {
    int n; cin >> n;
  string in; cin >> in;
  n = in.size();
  int i = 0;
  int c = 0;
  while (i < in.size() - 1) {
    if (in[i] == in[i + 1]) {
      c++;
      i += 2;
      continue;
    }
    if (in[i] == '(' && in[i + 1] == ')') {
      c++;
      i += 2;
      continue;
    }
    int index = -1;
    for (int k = i + 1; k < n; k++) {
      if (in[k] == ')') {
        c++;
        index = k;
        break;
      }
    }
    if (index == -1) break;
    i = index + 1;
  }
  int l = 0;
  if (i < n) {
    l = n - i;
  }

  cout << c << " " << l << endl;
}

int main(){
    //ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        //inp();
        solve();
    }
    return 0;
}