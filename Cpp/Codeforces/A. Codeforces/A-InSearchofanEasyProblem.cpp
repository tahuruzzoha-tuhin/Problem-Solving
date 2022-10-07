
#include<iostream>
using namespace std;
int main()
{
    long int n, k, sub;
    cin >> n;
    long int a;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a;
        if(a==1) 
            {
                sub = 1;
                break;
            }
        else sub = 0;
    }
    if(sub==0) cout << "EASY" << endl;
    else  cout << "HARD" << endl;
} 
