#include<stdio.h>

enum boolean {NO,YES};
enum days {sun,mon,tue,wed,thu,fri=7,sat};
int main()

{
    enum boolean flag=YES;
    printf("YES=%d\n thu=%d\n sat=%d\n",flag,thu,sat);
    return 0;
}
