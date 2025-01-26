#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;

        // Iterate over the blocks of the first tower
        for (int i = 0; i < n - 1; i++) {
            // If we have consecutive blocks of the same color, move the top block to the second tower
            if (s[i] == s[i + 1]) {
                if (t.back() == s[i]) {
                    cout << "NO\n";
                    goto next_case;
                }
                t += s[i];
                s.erase(s.begin() + i);
                n--;
                i--;
            }
        }

        // Iterate over the blocks of the second tower
        for (int i = 0; i < m - 1; i++) {
            // If we have consecutive blocks of the same color, move the top block to the first tower
            if (t[i] == t[i + 1]) {
                if (s.back() == t[i]) {
                    cout << "NO\n";
                    goto next_case;
                }
                s += t[i];
                t.erase(t.begin() + i);
                m--;
                i--;
            }
        }

        // If we reach this point, the pair of towers is beautiful
        cout << "YES\n";
        next_case:;
    }
    return 0;
}
