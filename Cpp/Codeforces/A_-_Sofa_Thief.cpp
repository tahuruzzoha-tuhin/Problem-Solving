#include <bits/stdc++.h>
using namespace std;
#define pb push_back

typedef struct Sofa
{
    int x1, y1, x2, y2, id;
} sofa;

int BS(int x, vector<int> a, int val)
{
    int s = 0, e = a.size() - 1, mid, ans = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;

        if (val == 1)
        {
            if (a[mid] > x)
            {
                ans = mid;
                e = mid - 1;
            }
            else
                s = mid + 1;
        }
        else
        {
            if (a[mid] < x)
            {
                ans = mid;
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
    }
    if (ans == -1)
        return 0;
    return (val == 1 ? a.size() - ans : ans + 1);
}

void Accepted()
{
    int d, n, m;
    int cl, cr, ct, cb;
    cin >> d;
    vector<int> X1(d), X2(d), Y1(d), Y2(d);
    vector<sofa> s;

    cin >> n >> m;

    for (int i = 0; i < d; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a > c)
            swap(a, c);
        if (b > d)
            swap(b, d);
        s.push_back({a, b, c, d, i + 1});

        X1[i] = a, X2[i] = c;
        Y1[i] = b, Y2[i] = d;
    }
    sort(X1.begin(), X1.end());
    sort(Y1.begin(), Y1.end());
    sort(X2.begin(), X2.end());
    sort(Y2.begin(), Y2.end());

    cin >> cl >> cr >> ct >> cb;
    int ans = -1;
    for (auto xx : s)
    {
        if (xx.x1 == xx.x2)
        {
            int l, r, t, b;
            r = BS(xx.x1, X2, 1);
            if (r != cr)
                continue;
            l = BS(xx.x2, X1, -1);
            if (l != cl)
                continue;
            t = BS(xx.y2, Y1, -1) - 1;
            if (t != ct)
                continue;
            b = BS(xx.y1, Y2, 1) - 1;

            if (cb == b)
            {
                ans = xx.id;
                break;
            }
        }
        else
        {
            int l, r, t, b;
            r = BS(xx.x1, X2, 1) - 1;
            if (r != cr)
                continue;
            l = BS(xx.x2, X1, -1) - 1;
            if (l != cl)
                continue;
            t = BS(xx.y1, Y1, -1);
            if (t != ct)
                continue;
            b = BS(xx.y1, Y2, 1);

            if (cb == b)
            {
                ans = xx.id;
                break;
            }
        }
    }

    cout << ans << "\n";
    // return;
}


int32_t main()
{
    // config();
    int test_kase = 1;
    // cin >> t;
    while(test_kase--) Accepted();
    // TLE;
    return 0;
}
