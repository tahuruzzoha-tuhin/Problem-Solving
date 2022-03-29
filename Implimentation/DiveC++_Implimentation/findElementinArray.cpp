#include<iostream>
using namespace std;
int main()
{
    int n, i = 0;
    cin >> n;
    int a[n];
    while (i<n)
    {
        cin >> a[i];
        i++;
    }
    int m;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if (m==a[i])
        {
            cout << "Found at " << i << endl;
            return 0;
        }
        
    }
    cout << "Not Found" << endl;  
    
}