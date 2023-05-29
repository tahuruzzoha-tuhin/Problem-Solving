/****************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\****************************************************************/

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long UL;


template <typename T>
T input() {
    T n;
    cin >> n;
    return n;
}

void accepted() {
    LL n = input<LL>();
    vector<LL> a(n);
    for (LL i = 0; i < n; ++i) {
        a[i] = input<LL>();
    }

    LL res = 0;
    stack<pair<LL, LL>> stk;
    for (LL i = 0; i < n; ++i) {
        LL ans = 0;
        stk = stack<pair<LL, LL>>();
        for (LL j = i; j < n; ++j) {
            LL start = j;
            LL mx = a[j];
            while (!stk.empty()) {
                auto [x, y, z] = stk.top();
                if (a[j] < y) {
                    mx = max(mx, y);
                    ans -= z;
                    start = x;
                    stk.pop();
                } else {
                    break;
                }
            }
            ans += j - start;
            res += ans;
            stk.pLLh({start, mx, j - start});
        }
    }
    cout << res << endl;
}

int main() {
    LL test = input<LL>();
    for (LL i = 0; i < test; ++i) {
        accepted();
    }
    return 0;
}
