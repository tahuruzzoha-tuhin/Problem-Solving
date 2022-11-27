#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, k, l, c, d, p, nl, np, A, B, C, D, mn=0;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	A = k*l;
	B = A/nl;
	C = c*d;
	D = p/np;
	mn = min(B,C);
	mn = min(mn,D);
	mn = mn/n;
	cout << mn << endl ; 
	return 0;
}