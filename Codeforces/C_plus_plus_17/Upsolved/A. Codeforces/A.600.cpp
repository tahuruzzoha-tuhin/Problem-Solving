#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int a[1000], b[1000], c=0;
	int q, p;
	int t ,n, cnt, d=0, flag;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> t;
		for (int j = 0; j < t; ++j)
		{
			cin >> a[j] ;
			cin >> b[j];	
		}
		for (int k = 0, h=k; k < t; ++k)
		{
			if (a[k]!=b[k])
			{
				c=abs(a[k]-b[k]);
				p=abs(a[h+1]-b[h+1]);
				if((c-p)==0)
				{
					 cout << "YES" << endl;
					break;
				}
	
				else
					{
						cout << "NO" << endl;
						break;
			}
			}

		}
	}
	return 0;
}