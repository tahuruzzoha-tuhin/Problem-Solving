#include<stdio.h>
#include<math.h>
//#include<conio.h>

int main()
{
	double a,b,c,r1,r2,r3,s,h;
	double pi=3.1416;
	double area_triangle,area_blank_space;
	double A,B,C;



	scanf("%lf%lf%lf",&r1,&r2,&r3);

	s=r1+r2+r3;
	a=r1+r2;
	b=r1+r3;
	c=r2+r3;

	area_triangle=sqrt(s*(s-a)*(s-b)*(s-c));
	h=(2.0*area_triangle)/a;

	A=asin(h/b)*(180.0/pi);
	B=asin(h/c)*(180.0/pi);
	C=180.0-(A+B);




	area_blank_space=(area_triangle-(pi/360.0)*((A*r1*r1)+(B*r2*r2)+(C*r3*r3)));
	printf("%lf",area_blank_space);
	return 0;
}