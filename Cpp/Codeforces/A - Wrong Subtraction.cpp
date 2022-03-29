#include<iostream>
using namespace std;
int main()
{
    long int n, k, sub;
    cin >> n >> k;
    sub = n;
    for (int i = 1; i <= k; ++i)
    {
        if(sub%10!=0) sub -= 1;
        else sub /= 10;
    }
    cout << sub << endl;
} //131203 11
