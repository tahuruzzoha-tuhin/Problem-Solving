#include<bits/stdc++.h>
#define max 1000000
using namespace std;

int main(int argc, char const *argv[])
{


	int a[max];
	int b[max];
	int n, cnt=0, sum=0, val=0, sums;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		b[i]=a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
	
			if (a[i]!=b[j])
			{
				sum+=b[i];
				sums=sum;
				cout << "sum " << sum << endl;
				val++;
			}

			else if (a[i]==b[j])
			{
				cnt++;
				break;
			}

		}

	}
	if(sums==0) 
		{
			cout << val << endl;
			cout << n << endl;
		}


	return 0;
}