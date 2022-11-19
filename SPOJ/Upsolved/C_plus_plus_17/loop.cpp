#include<iostream>
using namespace std;
int main()
{
    long long int n, r,sum=0;
    cout << "Enter a number: " ;
    cin >> n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum*10+r;
    }
    cout << sum << endl;
    return 0;
}
