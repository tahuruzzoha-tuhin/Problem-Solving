#include <iostream>
using namespace std;
int main()
{
    float w[5] = {3, 11, 4, 7, 9};
    float p;
    p = w[0];
    for (auto s : w)
    {
       if (s>p)
       {
           p=s;
       }
       
    }
    cout << p << endl;
}