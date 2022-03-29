#include<iostream>
using namespace std;
int main()
{

    int n, count=0, sum;
    cin >> n;
    for(int j=1; j<=n; j++)
    {

        for(int i=1; i<=j; i++)
        {
            if(j%i==0) count++;
        }
        if(count == 2)
        {
            cout << j << endl;
            count = 0;
        }

        else
            count = 0;
    }
    return 0;
}
