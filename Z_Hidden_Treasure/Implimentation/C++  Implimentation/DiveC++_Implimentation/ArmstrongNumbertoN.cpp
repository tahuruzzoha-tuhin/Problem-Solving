#include<iostream>
using namespace std;
int main()
{

    int n, m, digit=0, arm=0, mul=0, sum=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        m=i;
        while(i>0)
        {
            digit = i%10;
            i =i/10;
            arm = digit;
            sum = sum+(arm*arm*arm);

        }

    }

    if(sum==n)
    {
        cout << m <<  " Armstrong" << endl;
        sum=0;

    }
    else sum=0;

    return 0;
}
