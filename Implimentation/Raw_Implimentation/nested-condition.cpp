#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n1, n2, n3;
	cout << "Enter Three Integer:";
	cin >> n1 >> n2 >> n3;
	if (n1<n2)
	{
		if (n1<n3)
		{
			cout << "Their Minimum is:" << n1 << endl;
		}
		else
		{
			cout << "Their Minimum is:" << n3 << endl;
		}
	}
	else
	{
		if (n2<n3)
		{
			cout << "Their Minimum is: " << n2 << endl;
		}
		else
		{
			cout << "Their Minimum is: " << n3 << endl;
		}
	}
	return 0;
}