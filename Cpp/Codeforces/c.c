#include<stdio.h>
#include<math.h>
#define pi acos(-1)

int main(int argc, char const *argv[])
{
	int n;
	float r, R, area;
	printf("Enter the Radius of large circle: ");
	scanf("%f",&R);
	printf("Enter the number of small circle: ");
	scanf("%d",&n);
	r=(R*sin(pi/n))/(1+sin(pi/n));
	area = (pi*R*R)-(pi*n*r*r);
	printf("Area of the empty space = %f\n",area );
	return 0;
}