#include<iostream>
#include<vector>
using namespace std;

// 2n+1
int unique(vector<int> brr) {

    int n = brr.size();
    int cumulative_xor = 0;
    for(int i=0; i < n; i++) {
        cumulative_xor ^= brr[i];
    }
    return cumulative_xor;
}
int main()
{
    vector<int> arr = {1,2,3,4,3,2,1};
    cout << unique(arr) << endl;

    return 0;
}