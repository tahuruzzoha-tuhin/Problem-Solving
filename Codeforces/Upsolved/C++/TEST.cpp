#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> p(n);
        p[0] = a[0];
        for (int i = 1; i < n; i++) {
            p[i] = p[i-1] + a[i];
        }
        ll ans = 0;
        for (int len = 1; len <= n; len++) {
            for (int l = 0; l + len - 1 < n; l++) {
                int r = l + len - 1;
                ll sum = p[r] - (l > 0 ? p[l-1] : 0);
                ans += sum * (ll)(r-l+1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
