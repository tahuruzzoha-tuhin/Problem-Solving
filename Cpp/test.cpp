
#include <bits/stdc++.h>
using namespace std;

long long int countDigits(long long l)
{
	if (l >= 1000000000000000000L)
		return 19;
	if (l >= 100000000000000000L)
		return 18;
	if (l >= 10000000000000000L)
		return 17;
	if (l >= 1000000000000000L)
		return 16;
	if (l >= 100000000000000L)
		return 15;
	if (l >= 10000000000000L)
		return 14;
	if (l >= 1000000000000L)
		return 13;
	if (l >= 100000000000L)
		return 12;
	if (l >= 10000000000L)
		return 11;
	if (l >= 1000000000L)
		return 10;
	if (l >= 100000000L)
		return 9;
	if (l >= 10000000L)
		return 8;
	if (l >= 1000000L)
		return 7;
	if (l >= 100000L)
		return 6;
	if (l >= 10000L)
		return 5;
	if (l >= 1000L)
		return 4;
	if (l >= 100L)
		return 3;
	if (l >= 10L)
		return 2;
	return 1;
}

void solve()
{
	long long n;
	cin >> n;
	vector<long long> nums;
	for (int i = 0; i < 5000; i++)
	{
		for (int j = i; j < 5000; j++)
		{
			long long a = (i + j) * (i * i + j * j);
			nums.push_back(a);
		}
	}
	sort(nums.begin(), nums.end());
	for (long long i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << "\n";
	}
}
int main()
{
	// cout << countDigits(233423423423) << endl;
	solve();
}