#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int q, w, e;
        cin >> q >> w >> e;
        if (q > w) {
            swap(q, w);
        }
        int bec = w - q;
        int z = 0;
        for (int i = 60; i >= 0; --i) {
            if ((q ^ w) >> i & 1) {
                if (z + (1 << i) <= e) {
                    if (0 == (q >> i & 1)) {
                        if (1 << (i + 1) <= bec) {
                            z += (1 << i);
                            bec -= (1 << (1 + i));
                        }
                    }
                }
            }
        }
        cout << bec << endl;
    }
}
