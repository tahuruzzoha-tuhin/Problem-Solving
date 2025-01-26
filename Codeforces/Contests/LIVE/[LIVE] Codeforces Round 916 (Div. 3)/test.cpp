#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    for (int _ = 0; _ < t; ++_) {
        int size;
        cin >> size;  // Duration of winter holidays

        int arr[size], brr[size];
        for(int &x: arr) cin >> x;
        for(int &x: brr) cin >> x;
        vector<pair<int, int>> clone(size);

        for(int i=0; i<size; i++){
            clone[i] = {arr[i]+brr[i], i};
        }
        sort(clone.begin(), clone.end());
        long long result =0, op = 0;

        for(int i=size-1; i>=0; i--){
            if(op%2==0){
                result += arr[clone[i].second]-1;
            } else {
                result -= brr[clone[i].second]-1;
            }
            op++;
        }

        cout << result << endl;
        
    }

    return 0;
}



ll n , result = 0 , op = 0;
    cin >> n;
    vector<ll> a(n), b(n);
    vector<pair<ll,ll>> c(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; ++i) {
        cin >> b[i];
    }
    for (ll i = 0; i < n; ++i) {
        c[i] = {a[i] + b[i] , i};
    }
    sort(c.begin(),c.end());
    for (ll i = n - 1; i >= 0; --i)
    {
        if(op % 2 == 0)
            result = result + (a[c[i].second] - 1);
        else
            result = result - (b[c[i].second] - 1);
        op++;
    }
    cout << result << endl;