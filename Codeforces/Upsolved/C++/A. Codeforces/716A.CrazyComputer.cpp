#include<iostream>
using namespace std;
int main()
{
    int n, c, i;
    cin >> n >> c;
    int a[n+5];
    cin >> a[0];
    int count = 1;
    for(i = 1; i < n; i++)
    {
        cin >> a[i];
        count++;
        if(a[i]-a[i-1] > c)
            count = 1;
    }
    cout << count;
    return 0;
}

