#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, ev=0, od=0, sum=0;
// TODO (tuhin#1#):
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		 sum+=a[i];
		if(a[i]%2==0) ev+=1;
		else od+=1;
	}
	if(sum%2==0) cout << ev << endl;
	else cout << od << endl;
	return 0;
}
