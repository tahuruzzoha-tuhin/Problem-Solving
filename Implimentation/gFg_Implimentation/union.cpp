#include<iostream>
using namespace std;
union test {
	int x, y;
};
int main()
{
	union test t;
	t.x = 2;
	cout << "After making x = 2:" << endl << "x = " << t.x << ", y = " << t.y << endl;
	t.y = 10;
	cout << "After making x = 10:" << endl << "x = " << t.x << ", y = " << t.y << endl;
}