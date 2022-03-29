#include <iostream>
using namespace std;
enum week
{
	mon, tue, wed, thur, fri, sat, sun
};
int main(int argc, char const *argv[])
{
	enum week day;
	day = sun;
	cout << day;
	return 0;
}