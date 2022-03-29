#include<iostream>

using namespace std;

int main()
{
	int q, a, b, n, S;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		a=b=n=S=0;
		cin >> a >> b >> n >> S;
		if((a*n)<S && S<=(a*n+b)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}