#include<iostream>
using namespace std;
int main()
{
    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int m, flag=0;
        cin >> m;
        int a[m+1], b[m+1];
        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
            b[j]=a[j];
        }
        for (int k = 0; k < m; k++)
        {
            if(b[m-1]>b[k]) flag+=1;  
        }
        for (int i = m-1; i>=0; i--)
        {
            if (b[i]==a[m-1-i])
            {
                flag+=1;
            }
            
        }
        
        if (flag>0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        
        
    }
    
}