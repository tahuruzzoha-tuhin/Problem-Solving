#include <iostream>
using namespace std;
int main()
{
    float w[5] = {3, 5, 4, 7, 9};
    float p;
    for (auto s : w)
    {
        p += s;
        cout << p << endl;
    }
}