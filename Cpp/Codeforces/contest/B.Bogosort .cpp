
// Problem : B. Bogosort
// Contest : Educational Codeforces Round 83 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1312/problem/B
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t, n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int a[n+1];
		for(int i=0; i<n; ++i)
		{
			cin >> a[i];
		}
		sort(a, a+n);
		reverse(a, a+n);
		for(int i=0; i<n; ++i)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;	
}