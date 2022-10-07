#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int x, y, t, z, A, B, C;
	cin >> t;
	for(int i=0; i<t; i++)
	{
		cin >> A >> B >> C;


		z = (((3*C)/A)-1)/2;
		y = z-1;
		x = y-1;
		if (A+B==C)
		{
			cout << "No solution" << endl;
		}
		else
		cout << x << " " << y << " " << z << endl; 
	}
	return 0;
}