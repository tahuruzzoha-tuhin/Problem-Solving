// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define vi vector<ll>

// int main(int argc, char ** argv){
//     int t;
//     cin >> t;
//     for(int test_i=0;test_i<t;test_i++){
//     ll n;
//     cin >> n;
//     vi v(n);
//     for (auto &u : v)
//     {
//         cin >> u;
//     }
//     ll c = 0, ok = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (v[i] > v[i + 1])
//         {
//             if (ok != 1)
//             {
//                 c++;
//             }
//             ok = 1;
//         }
//         else if (v[i] < v[i + 1])
//         {
//             if (ok != -1)
//             {
//                 c++;
//             }
//             ok = -1;
//         }
//     }
//     cout << c + 1 << endl;
// }



// }

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char ** argv){
    int t;
    cin >> t;
    for(int test_i=0;test_i<t;test_i++){
        int n;
        cin >> n;
        vector<int> a(n);
        int prev = -1;
        int cnt = 0;
        for(int i=0;i<n;i++) {
            int x;
            cin >> x;
            if(x==prev) {
                cnt++;
            }else {
                a[i-cnt] = x;
                prev = x;
            }
        }
        n -= cnt;
        if(n == 1) cout << 1 << endl;
        else {
            cnt = 0;
            bool incr = !(a[0]<=a[1]);
            for(int i=0;i<n-1;i++){
                if(incr){
                    if(a[i]<a[i+1]) cnt++;
                    else incr = false;
                }else {
                    if(a[i]>a[i+1]) cnt++;
                    else incr = true;
                }
            }
            cout << n-cnt << endl;
        }
    }
    return 0;
}