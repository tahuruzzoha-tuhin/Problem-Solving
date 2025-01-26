#include<bits/stdc++.h>
using namespace std;

int main(int argc, char ** argv){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int j=0;j<n;j++) {
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        for(int j=0;j<n-1;j++){
            a[j+1] += a[j];
        }
        long long res = 0;
        res = max(res, a[n-1-k]);
        for(int l=0;l<=k;l++){
            res = max(res, a[n-1-(k-l)]-a[2*l-1]);
        }
        cout << res << endl;
    }
    return 0;
}