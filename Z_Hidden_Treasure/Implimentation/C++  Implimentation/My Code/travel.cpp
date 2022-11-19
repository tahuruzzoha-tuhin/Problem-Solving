#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n, m, a, b;

	cin >> n>>m>> a>>b;

	int x;

	 x = n;
	int count = 0;
	int count1 = 0, count2 = 0;
	while((n-m) >= 0)
	{
		count++;
		n = n- m;


	}
	count1 = x - (count*m);

	if(a<b)
	{


	cout << ((count*b) + (count1*a)) <<endl;
	}

	else
	{
		cout << (count*b)+b;
	}

}
