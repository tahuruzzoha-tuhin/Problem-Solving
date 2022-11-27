    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
     
    int mydd, mymm, myyy;
    int dd, mm, yy;
     
    int cmp(int d, int m, int y);
     
    int main()
    {
    	char c;
    	scanf("%d%c%d%c%d", &dd, &c, &mm, &c, &yy);
    	scanf("%d%c%d%c%d", &mydd, &c, &mymm, &c, &myyy);
    	if (cmp(mydd, mymm, myyy) || cmp(mydd, myyy, mymm) || cmp(mymm, mydd, myyy) || cmp(mymm, myyy, mydd) || cmp(myyy, mymm, mydd) || cmp(myyy, mydd, mymm))
    		printf("YES\n");
    	else
    		printf("NO\n");
    	return 0;
    }
     
    int cmp(int d, int m, int y)
    {
    	if (m > 12) return 0;
    	if (!(y % 4) && m == 2 && d > 29) return 0;
    	if ((y % 4) && m == 2 && d > 28) return 0;
    	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
    		if (d > 31) return 0;
    	} else {
    		if (d > 30) return 0;
    	}
    	if (yy - y > 18) return 1;
    	if (yy - y == 18) {
    		if (m < mm) return 1;
    		if (m == mm && d <= dd) return 1;
    	}
    	return 0;
    }