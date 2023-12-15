#include <iostream>
#include <vector>
#include <set>

using namespace std;

const int MAXN = 1000;
vector<int> primes;
set<int> primeSet;

void sieve(int n) {
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            
            for (int j = 2*i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

bool isPrimeDiff(int x, int y) {
    return primeSet.count(abs(x - y));
}

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> grid(n, vector<int>(m));
    vector<bool> used(n*m+1, false);
    
    for (int i = 0; i < n*m; i++) {
        int r = i / m;
        int c = i % m;
        
        for (int j = 1; j <= n*m; j++) {
            if (!used[j] && (r == 0 || !isPrimeDiff(j, grid[r-1][c])) && (c == 0 || !isPrimeDiff(j, grid[r][c-1]))) {
                grid[r][c] = j;
                used[j] = true;
                break;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    sieve(2*MAXN*MAXN);
    for (int prime : primes) {
        primeSet.insert(prime);
    }
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
