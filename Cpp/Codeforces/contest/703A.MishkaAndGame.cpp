#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, m, c;
	int mis=0, cri=0, drw=0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> m >> c;
		if(m > c) mis++;
		else if(c > m) cri++;
		else if(c == m) drw++;
 	}
 	if(mis > cri) cout << "Mishka" << "\n";
 	else if(cri > mis) cout << "Chris" << "\n";
 	else if(mis == cri) cout << "Friendship is magic!^^" << "\n";
	return 0;
}