#include<iostream>
using namespace std;
int main()
{
    int n, m, l, h, k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                int twmp = a[j];
                a[j] = a[j+1];
                a[j+1] = twmp;
            }   
        }
    }
    l = 0;
    h = n-1;
    int i = 0;
    for(int x:a) 
    {
        cout << "a[" << i++ << "] = " << x << " ";
        cout << endl;
    }
    cin >> k;
    while (l <= h)
    {
        m = (l+h)/2;
        if (k == a[m])
        {
            cout << "Index: " << m << endl;
            return 0;
        }
        else if (k < a[m])
        {
            h = m-1;
        }
        
        else
        {
            l = m+1;
        }        
    }
    cout << "Hamba!!" << endl;
    return 0;
}