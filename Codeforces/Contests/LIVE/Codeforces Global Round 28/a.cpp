#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

inline bool canReachZero(long long x) {
    if (x == 0) return true;
    if (x < 33) return false;
    
    queue<long long> q;
    unordered_set<long long> visited;
    
    q.push(x);
    visited.insert(x);
    
    while (!q.empty()) {
        long long curr = q.front();
        q.pop();
        
        // Try subtracting 33
        if (curr >= 33) {
            long long next = curr - 33;
            if (next == 0) return true;
            if (visited.find(next) == visited.end()) {
                q.push(next);
                visited.insert(next);
            }
        }
        
        // Check for consecutive 33s without string conversion
        long long temp = curr;
        long long power = 1;
        while (temp >= 100) {
            if (temp % 100 == 33) {
                // Remove 33 by integer division and modulo
                long long next = (temp / 100) * power + (temp % 10);
                if (next == 0) return true;
                if (visited.find(next) == visited.end()) {
                    q.push(next);
                    visited.insert(next);
                }
            }
            temp /= 10;
            power *= 10;
        }
    }
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long x;
        cin >> x;
        cout << (canReachZero(x) ? "YES\n" : "NO\n");
    }
    
    return 0;
}