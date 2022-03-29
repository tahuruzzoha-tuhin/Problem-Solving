#include<iostream>
using namespace std;
struct Point
{
	int x, y;
};

int main(int argc, char const *argv[])
{
	struct Point arr[10];
	arr[0].x = 20;
	arr[0].y = 10;

	cout << arr[0].x << ", " << arr[0].y;
	return 0;
}