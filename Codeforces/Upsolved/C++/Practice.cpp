#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "TUHIN", s2 = "tuhin";
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    cout << s1 << endl << s2 << endl;
}