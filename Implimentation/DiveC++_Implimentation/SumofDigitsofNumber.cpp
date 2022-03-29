#include<iostream>
using namespace std;
int main()
{

    int n, sum=0, digit=0;
    cin >> n;
  //  cout <<"Digits: ";
    for(;n>0;)
    {
        digit = n%10;
        n = n/10;
        sum+=digit;
//        cout << digit <<" ";
    }
    cout << endl;
    cout << "Summation of digits: " << sum << endl;;
    return 0;
}
