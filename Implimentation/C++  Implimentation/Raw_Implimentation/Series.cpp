#include<stdio.h>

#define SUB 7


int main(int argc, char const *argv[])
{
	double SD, RA, VA, MS, ADA, MV, AL, CGPA;
	double cSD = 4, cRA = 3, cVA = 3, cMS = 3, cADA = 3, cMV = 1.5, cAL = 1.5;
	printf("SD:");
	scanf("%lf",&SD);
	printf("RA:");
	scanf("%lf",&RA);
	printf("VA:");
	scanf("%lf",&VA);		
	printf("MS:");
	scanf("%lf",&MS);
	printf("ADA:");
	scanf("%lf",&ADA);
	printf("MV:");
	scanf("%lf",&MV);
	printf("AL:");
	scanf("%lf",&AL);

	CGPA=((SD*cSD + RA*cRA + VA*cVA + MS*cMS + ADA*cADA + MV*cMV + AL*cAL )/SUB);
	printf("%0.2lf\n",CGPA );
	return 0;
}