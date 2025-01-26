#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAX = 1000000;
int BUREK[4][MAX + 10];

int main() {
    int n, m, ans, in;

    while (scanf("%d", &n) != EOF) {
        memset(BUREK, 0, sizeof(BUREK));

        for (int i = 0; i < n; i++) {
            int x1, y1, x2, y2, x3, y3;
            scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);

            int max_x = max(x1, max(x2, x3));
            int min_x = min(x1, min(x2, x3));
            int max_y = max(y1, max(y2, y3));
            int min_y = min(y1, min(y2, y3));

            BUREK[0][max_x]++;
            BUREK[1][min_x]++;
            BUREK[2][max_y]++;
            BUREK[3][min_y]++;
        }

        for (int i = 1; i <= MAX; i++) {
            BUREK[0][i] += BUREK[0][i - 1];
            BUREK[2][i] += BUREK[2][i - 1];
        }

        for (int i = MAX - 1; i >= 0; i--) {
            BUREK[1][i] += BUREK[1][i + 1];
            BUREK[3][i] += BUREK[3][i + 1];
        }

        scanf("%d", &m);

        while (m--) {
            char word;
            scanf(" %c = %d", &word, &in);

            if (word == 'x')
                ans = n - BUREK[0][in] - BUREK[1][in];
            else
                ans = n - BUREK[2][in] - BUREK[3][in];

            printf("%d\n", ans);
        }
    }

    return 0;
}
