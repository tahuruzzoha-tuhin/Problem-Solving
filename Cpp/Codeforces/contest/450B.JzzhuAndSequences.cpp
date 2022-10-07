/*#include <iostream>
using namespace std;
long long a,b,n,m=1000000007;
int main() {
	cin >> a >> b >> n;
	long long c[6]={a-b, a, b, b-a, -a, -b};
	cout << (c[n%6]+2*m)%m;
}
*/

/*#include <iostream>
using namespace std;
long long x,y,n,a=1000000007;
int main() {
	cin >> x >> y >> n;
	long long arr[6]={x-y, x, y, y-x, -x, -y};
	cout << (arr[n%6]+2*a)%a;

	printf("\n%c\n",69 );
}*/

#include<iostream>
#include<cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	int i, x[]={3,4,6,1,4,3,9,1,5,3},y, *p,*q,*r,*s;
	p=x; q=&y;
	//cout << "p " << p << "  x " << x << "\n";
	//printf("p=%d x=%d\n",*p,*x );
	*p=*(x+3*2);
	//cout <<"p " << p << "  x" << x << "\n";
	//printf("p=%d x=%d\n",*p,*x );
	q=r=++p;
	//cout << "p " << p << " x " << x << "q "<< q << "r " << r << "\n";
	//printf("q=%d r=%d p=%d\n",*q,*r,*p );
	(*p)++; q++; s=r--;
	//cout << "p " << p << " x " << x << "q "<< q << "r " << r <<"s " << s  << "\n";
	printf("p=%d q=%d s=%d r=%d\n",*p,*q,*s,*r );


	y= *p+*q+*r+*(r+2); s=&y;

	//printf("y=%d s=%d\n",y,*s );

	r-=2; 
	q=p; *r=*s+5-*(p-1)-(x[2]-*(x+4));

	//printf("p=%d,q=%d,r=%d\n",*p,*q,*r);

	p=&y; *(x+3)=y++; s=x+2;

	//printf("p=%d, s=%d, y=%d\n",*p,*s,y );

	for (int i = 3; i < 9; i+=2)
	{
		printf("*(x+9-i)=%d, *p=%d, *q=%d, *r=%d, *s=%d, *(x+i)=%d\n", *(x+9-i), *p, *q, *r, *s, *(x+i));
	}

	return 0;
}