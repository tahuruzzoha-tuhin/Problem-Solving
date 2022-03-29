#include<iostream>
using namespace std;
int f,a,s[10],q[2],e,i;
int main(){
	while(cin>>a)
		if(++s[a]==4)f=1,s[a]=0;
	for(;i<10;i++)
		if(s[i])q[e++]=s[i];
	cout<<((!f)?"Alien":((q[0]!=q[1])?"Elephant":"Bear"));
}