#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

vector<vector<int>> generate_permutations(vector<int>& a) {
    vector<vector<int>> perms;
    sort(a.begin(), a.end()); // Ensure a is sorted for permutations
    
    do {
        perms.push_back(a);
    } while (next_permutation(a.begin(), a.end()));
    
    return perms;
}

int manhattan_distance_sum(const vector<int>& perm) {
    int sum = 0;
    for (int i = 0; i < perm.size(); ++i) {
        sum += abs(perm[i] - (i + 1)); // i+1 because permutation is 0-indexed
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        iota(a.begin(), a.end(), 1); // Fill a with 1 to n
        
        vector<vector<int>> permutations = generate_permutations(a);
        
        bool found = false;
        for (const auto& perm : permutations) {
            if (manhattan_distance_sum(perm) == k) {
                found = true;
                cout << "YES\n";
                for (int num : perm) {
                    cout << num << " ";
                }
                cout << "\n";
                break;
            } else {
                found = false;
            }
        }
        
        if (!found) {
            cout << "NO\n";
        }
    }
    
    return 0;
}
