#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
const int sz = 100010;
int x[sz], h[sz];

int solve(int argc, int co)
{
	int n, temp=0;
	bool swp = false;
	cin >> n;
	int a[n];
	int b[n-1];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for(int k=0; k < n-1; ++k)
	{
		swp = false;
		for(int j=0; j < n-k-1; ++j)
		{
			if(a[j] > a[j+1])
			{

				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				swp = true;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		b[i] = abs( a[i]-a[i+1] );  
	}
	for(int k=0; k < n-1; ++k)
	{
		swp = false;
		for(int j=0; j < n-k-1; ++j)
		{
			if(b[j] > b[j+1])
			{

				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
				swp = true;
			}
		}
	}

	if((b[n-1]) == abs( a[n-1]-a[n]))
		cout << a[n-2] << " ";

}

int main() {
	int n,i,k=0,j,ck=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	for(i=0; i<n; i++){
		if(k<=arr[i]){
			k+=arr[i];
			ck++;
		}
	}
	solve(k,ck);
	cout<<ck<<endl;
}
