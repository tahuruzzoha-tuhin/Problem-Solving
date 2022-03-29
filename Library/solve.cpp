
#include<bits/stdc++.h>
using namespace std;
int num[100005];
int temp[100005];

int __gcd(int a, int b)
{
    return (b==0) ? a : __gcd(b,a%b);
}

void merge_sort(int lo, int hi)
{
    if( lo == hi ) return;

    int mid = lo + hi >> 1;
    merge_sort(lo,mid);
    merge_sort(mid+1,hi);

    int k = lo, left = lo, right = mid + 1;

    while( k <= hi )
    {
        if( left > mid ) temp[k++] = num[right++];
        else if( right > hi ) temp[k++] = num[left++];
        else if( num[left] <= num[right] ) temp[k++] = num[left++];
        else temp[k++] = num[right++];
    }

    for(int i=lo; i<=hi; i++) num[i] = temp[i];
    return;
}

int main()
{
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i=0; i<n; ++i)
        cin >> numbers[i];
    sort(numbers.begin(),numbers.end());
    vector<int> diff(n-1);
    for (int i=0; i<n-1; ++i)
        diff[i] = numbers[i+1]-numbers[i];
    int g = diff[0];
    for (int i=1; i<n-1; ++i)
        g = __gcd(g,diff[i]);
    int count=0;
    for (int i=0; i<n-1; ++i)
        count += (diff[i]/g)-1;
    cout << count;
}
