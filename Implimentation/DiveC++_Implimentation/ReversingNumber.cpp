#include<iostream>
using namespace std;
int main()
{
    long long n, digit=0, rev=0;
    cin >> n;
    while(n>0)
    {

        digit = n%10;
        n = n/10;
        rev = (rev*10) + digit;
    }
    cout << rev << endl;
}
