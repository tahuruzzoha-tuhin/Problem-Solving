#include <bits/stdc++.h>

using namespace std;

int i,j,sum=0,m,n;


void swap(int *xp, int *yp)
{
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void bubbleSort(int a[], int n)
{

    for (i = 0; i < n-1; i++)

        for (j = 0; j < n-i-1; j++)
            if (a[j] > a[j+1])
                swap(&a[j], &a[j+1]);
        }




/*void printDistinct(int a[], int n, int m)
{





}*/

        int main()
        {

            scanf("%d",&m);
            int a[m];
            for (i = 0; i < m; ++i)
            {
                scanf("%d",&a[i]);
            }
            n = sizeof(a)/sizeof(a[0]);
            bubbleSort(a, n);
//printDistinct(a, n, m);

////////////////

            int b[m];
            for (i=0; i<n; i++)
            {


                for (j=0; j<i; j++)
                    if (a[i] == a[j]){

                        break;
                    }


                    if (i == j)
                    {
                        n=n-i+1;
                        b[m]=a[i];
                        printf("b[%d]=%d\n",i,b[m] );

                        printf("b[%d]= %d\n",i, b[i] );

                        sum=sum+1;

                    }


                }


///////////////

                printf(" %d \n",sum );



                if (sum > 3)
                {
                    printf("-1\n");
                }
                else
                {
                    if (sum == 1)
                    {
                        printf("0\n");
                    }
                    else if (sum == 2)
                    {
                        if ((a[1]-a[0]) % 2 == 0)
                        {
                            printf("%d\n",(a[1] - a[0])/2 );
                        }
                        else
                        {
                            printf("%d\n",(a[1] - a[0]));
                        }
                    }
                    else
                    {

                        if ((a[1] - a[0]) != (a[2] - a[1]))
                        {
                            printf("-1\n");
                        }
                        else
                        {
                            printf("%d\n", (a[1]-a[0]));
                        }
                    }
                }


                return 0;
            }
