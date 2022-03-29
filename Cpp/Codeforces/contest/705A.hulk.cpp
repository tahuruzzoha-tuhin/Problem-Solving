#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	char a[1000] = "I hate it";
	char b[1000] = "I hate that";
	char c[1000] = "I love it";
	char d[1000] = "I love that";
	int n; int even = 0, odd = 0;
	cin >> n;
	if (n%2 == 0)
	{
		even = (n-2)/2;
		for (int i = 0; i < even; ++i)
		{
			cout << b << " " << d << " ";
		}
		cout << b << " " << c << " ";
	}
	else
	{
		odd = (n-1)/2;
		for (int i = 0; i < odd; ++i)
		{
			cout << b << " " << d << " ";
		}
		cout << a << " ";
	}
	cout << endl;
	return 0;
}