#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, p;
    string s;
    cin >> n >> p >> s;

    for (int i = n - 1; i >= 0; i--) {
        for (char c = s[i] + 1; c < 'a' + p; c++) {
            bool valid = true;
            for (int j = 0; j <= i - 1 - j; j++) {
                if (s[j] != c || s[i - 1 - j] != c) {
                    break;
                }
                if (j == i - 1 - j) {
                    valid = false;
                }
            }
            if (valid) {
                s[i] = c;
                for (int j = i + 1; j < n; j++) {
                    for (char d = 'a'; d < 'a' + p; d++) {
                        if (d != s[j - 1]) {
                            bool valid2 = true;
                            for (int k = 0; k <= j - 1 - k; k++) {
                                if (s[k] != d || s[j - 2 - k] != d) {
                                    break;
                                }
                                if (k == j - 1 - k) {
                                    valid2 = false;
                                }
                            }
                            if (valid2) {
                                s[j] = d;
                                cout << s << endl;
                                return 0;
                            }
                        }
                    }
                    s[j] = 'a';
                }
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
