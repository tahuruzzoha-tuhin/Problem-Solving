#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<vector<int>> SUME(n, vector<int>(n));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> SUME[i][j];
            }
        }

        if (n == 2) {
            int a0 = SUME[0][1] / 2;
            cout << a0 << " " << a0 << endl;
        } else {
            int diff = SUME[0][2] - SUME[0][1];
            int sum = SUME[1][2];
            int a2 = (sum + diff) / 2;
            int a0 = SUME[0][2] - a2;

            cout << a0 << " ";
            for (int j = 1; j < n; ++j) {
                cout << SUME[0][j] - a0;
                if (j < n - 1) cout << " ";
                else cout << endl;
            }
        }
    }

    return 0;
}
