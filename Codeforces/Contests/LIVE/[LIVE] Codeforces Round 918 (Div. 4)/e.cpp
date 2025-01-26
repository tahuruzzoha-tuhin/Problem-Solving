#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        long long nim;
        cin >> nim;
        vector<long long> anan(nim);
        int result = 0;
        unordered_map<long long, long long> moon;

        for (int i = 0; i < nim; i++)
            cin >> anan[i];

        moon[0LL] = 1LL;
        long long sum = 0;

        for (int i = 0; i < nim; i++) {
            if (i % 2 == 0) {
                sum = sum + anan[i];
            } else {
                sum = sum - anan[i];
            }

            if (moon.count(sum))
                result = 1;
            else
                moon[sum] = 1LL;
        }

        if (result == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
