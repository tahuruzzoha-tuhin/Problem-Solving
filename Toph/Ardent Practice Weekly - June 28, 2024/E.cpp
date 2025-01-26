#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countGoodElements(int N, vector<int>& A) {
    int good_count = 0;
    unordered_map<int, int> sums_count;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            int required_sum = A[i] - A[j];
            if (sums_count.find(required_sum) != sums_count.end()) {
                good_count += sums_count[required_sum];
            }
        }

        for (int k = 0; k < i; ++k) {
            int current_sum = A[i] + A[k];
            sums_count[current_sum]++;
        }
    }

    return good_count;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int result = countGoodElements(N, A);
    cout << result << endl;

    return 0;
}
