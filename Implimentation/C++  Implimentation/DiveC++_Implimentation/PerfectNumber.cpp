#include<iostream>
using namespace std;
int main()
{

    int n, sum=0;
    cin >> n;
    cout << "Factor's: ";
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            sum+=i;
            cout << i <<" ";
        }
    }
    cout << endl;
    cout << "Sum of Factor's: " << sum << endl;
    if(sum==2*n) cout << "Perfect Number" << endl;
    else cout << "Not Perfect" << endl;
    return 0;
}
