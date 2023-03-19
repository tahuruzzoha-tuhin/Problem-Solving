#include<bits/stdc++.h>
using namespace std;
#define LL    long long


void Accepted() {
    LL N, K;
    cin >> N >> K;
    vector <LL> Arr(N+1);

    for (int i=0; i<N; i++){
        cin >> Arr[i];
    }
    LL ans = 0;
    for(LL i=1; i<=K; i++){
        for(LL j=i; j<N; j++){
            K+=Arr[i]*i;
        }
    }
    // cout << K << endl;

    
}

int main()
{
    LL test_kase = 1;
    scanf("%lld", &test_kase);
    while(test_kase--) Accepted();
    // TLE;
    return 0;

}