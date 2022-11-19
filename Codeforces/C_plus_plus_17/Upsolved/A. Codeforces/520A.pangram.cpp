#include<iostream>
using namespace std;
/*int main(int argc, char const *argv[])
{
	int n,cnt=0;
	cin >> n;
	char a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if(a[i]==a[j]) cnt++;
		}
	}
	if(cnt > 0) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}*/
/*{
	int n, cnt = 0;
	cin >> n;
	char a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122)) cnt++;
	}
	if(cnt >= 26) cout << "YES" << endl;
	else cout << "NO" << endl;
}*/

int main(){
	int n,sum=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<26;i++)
		for(int j=0;j<n;j++){

			if((int(s[j])==(65+i))||(int(s[j])==(65+i+32)))
			{
				sum++;
				break;
			}}
			if(sum==26)
				cout<<"YES";
			else
				cout<<"NO";

}