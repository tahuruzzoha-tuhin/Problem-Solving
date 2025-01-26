#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    int total_berries = (a1 + b1 + a2 + a3 + b3) / 2;
    cout << total_berries - b3 << " " << total_berries - b3 << endl;
    return 0;
}
