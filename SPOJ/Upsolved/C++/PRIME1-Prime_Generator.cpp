#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<char> segmentedSieve(long long L, long long R) {

    long long lim = sqrt(R);
    vector<char> mark(lim + 1, false);
    vector<long long> primes;
    for (long long i = 2; i <= lim; ++i) {
        if (!mark[i]) {
            primes.emplace_back(i);
            for (long long j = i * i; j <= lim; j += i)
                mark[j] = true;
        }
    }

    vector<char> isPrime(R - L + 1, true);
    for (long long i : primes)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}

int main() {
    int p = 0; cin >> p;
    for (int j=0; j<p; j++){
        long long L = 0;
        long long R = 0;
        cin >> L >> R;
        vector<char> primes = segmentedSieve(L, R);

        for (long long i = 0; i < primes.size(); ++i) {
            if (primes[i]) {
                cout << (L + i) << " ";
            }
        }
        cout << endl;

    }
    return 0;
}
