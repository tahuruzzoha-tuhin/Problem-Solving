#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int q, n;
	cin >> q;
	int f,h;
	for (int i = 0; i < q; ++i)
	{
		n=0;
		cin >> n;
		int a[n], b[n], k[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			sort(a,a+n);
			b[i]=a[i];
			h=0;f=0;

		}

		for (int i = 0; i < n-1; ++i)
		{
			for (int j = i; j < n-1; ++j)
			{
				if (abs(b[i]-a[j+1])==1)
				{
					h++;
				}
				else 
				{
					f++;
				}
			}

		}
		if (n==1)
		{
			cout << n << endl;
		}
		else if (n==2 && abs(f-h)==1)
		{
			cout << abs(f-h) << endl;
		}
		else if (abs(f-h)>1)
		{
			 cout << "2" << endl;	
		}
	} 
	return 0;
}