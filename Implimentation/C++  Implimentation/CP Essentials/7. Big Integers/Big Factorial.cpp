#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define TLE cerr << "Time Elapsed " << (double)clock() / CLOCKS_PER_SEC << " s" << endl;

void multiply(vector<int> &a, int num, int &size)
{

    int carry = 0;
    for (int i = 0; i < size; i++)
    {

        int product = a[i] * num + carry;
        a[i] = product % 10;
        carry = product / 10;
    }
    while (carry)
    {
        a[size] = carry % 10;
        carry = carry / 10;
        size = size + 1;
    }
}
void bigFactorial(int n)
{

    vector<int> a(1000000000, 0);
    a[0] = 1;
    int size = 1;
    for (int i = 2; i <= n; i++)
    {
        multiply(a, i, size);
    }
    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i];
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    bigFactorial(n);
    TLE;
}