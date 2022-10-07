#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=0, q=0, flag;
    int n,m;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        flag=0;
        cin >> m;
        int a[m], b[m], c[m];
        for(int j=0; j<m; ++j)
        {
            cin >> a[j];
        }

        for(int l=0; l<m; ++l)
        {
            cin >> b[l];
        }
        sort(a,a+m);
        sort(b,b+m);
        for(int d=0; d<m; ++d)
        {

            cout << a[d] << " " ;
        }
        cout << endl;
        for(int d=0; d<m; ++d)
        {
            cout << b[d] << " " ;
        }
        cout << endl;
    }



    return 0;
}
