#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        int a[m+1];
        for (int j = 1; j <= m; j++)
        {
            cin >> a[j];
        }
        sort(a+1,a+m+1);
        for (int l = m; l>0; l--)
        {
            cout << a[l] << " ";
        }
        cout << endl;
        
        
    }
    
}