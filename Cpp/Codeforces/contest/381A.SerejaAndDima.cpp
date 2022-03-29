

#include<iostream>

using namespace std;
int main()
{
    int n, x, temp=0, sereja=0, dema=0;
    bool swp = false;
    cin >> n;
    int a[n];
    for(int y=0; y<n; y++) cin >> a[y];
    for(int k=0; k < n-1; ++k)
    {
        swp = false;
        for(int j=0; j < n-k-1; ++j)
        {
            if(a[j] > a[j+1])
            {

                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swp = true;
            }
        }
    }

    for(int i=n-1; i>=0; i-=2)
    {
        sereja+=a[i];
    }
    for(int h=n-2; h>=0; h-=2)
    {
        dema+=a[h];
    }
    cout << sereja << " " << dema << endl;
}

