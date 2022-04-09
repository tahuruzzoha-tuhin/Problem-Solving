#include<iostream>
using namespace std;
int main()
{

    int n, m, digit=0, arm=0, mul=0, sum=0 ;
    cin >> n;
    m=n;
    while(n>0)
    {
        digit = n%10;
        n =n/10;
        arm = digit;
        mul = arm*arm*arm;
        sum = sum+mul;
    }
    cout << sum << endl;
    if(sum==m)
    {
        cout << "Armstrong Number" << endl;
        sum=0;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
        sum=0;
    }
    return 0;
}
