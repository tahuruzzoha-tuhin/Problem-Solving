#include "bits/stdc++.h"

using namespace std;

#define ll long long
const int MAXN = 200200;

int t, n; 
vector<pair<int,int>> g[MAXN];
int good[MAXN];

int dfs(int c, int l, int pi) {

  vector<int> one, two;
  for (auto [i, wi] : g[c]) {

    if (i == l) continue;

    int ov = dfs(i, c, wi);
    if (ov == -1) return -1;

    if (ov == 1) {
      one.push_back(i);
      good[wi] = 1;
    }
    else if (ov == 2) {
      two.push_back(i);
      good[wi] = 1;
    }

  }

  if (two.size()) {
    if (two.size() > 1) return -1;
    if (one.size()) return -1;
    return 0;
  }
  else {
    if (one.size() == 0) return 1;
    else if (one.size() == 1) return 2;
    else if (one.size() == 2) return 0;
    else return -1;
  }

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  cin >> t;
  while (t--) {

    cin >> n;
    for (int i = 1; i <= n; i++) {
      g[i].clear();
      good[i] = 0;
    }

    for (int i = 1; i < n; i++) {
      int x, y; cin >> x >> y;
      g[x].push_back({y, i});
      g[y].push_back({x, i});
    }

    if (n % 3) {
      cout << "-1\n";
      continue;
    }

    int res = dfs(1, -1, -1);

    if (res == 0) {
      vector<int> ans;
      for (int i = 1; i < n; i++) {
        if (!good[i]) {
          ans.push_back(i);
        }
      }
      cout << ans.size() << "\n";
      for (int i : ans)
        cout << i << " ";
      cout << "\n";
    }
    else {
      cout << "-1\n";
    }

  }
  
}