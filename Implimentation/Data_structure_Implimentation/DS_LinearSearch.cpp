#include<stdio.h>

int main()
{
    int A[100]; //{12,14,3333,56,76,33,55,98,34,10987};
    int item=0; //index to be searched.
    int n=0;
    int j=0;
    printf("\n\nEnter A Number: ");
    scanf("%d",&n);
    printf("\nEnter %d Numbers: ",n);
    for (int k = 0; k < n; ++k)
    {
        scanf("%d",&A[k]);
    }
    printf("\nSearching A Number By Linear Search: ");
    scanf("%d",&item);
    printf("\n\n");
    for (int i = 0; i < n; ++i)
    {
        printf("A[%d] = %d\n",i,A[i] );
    }
    while(j<=n)
    {
        if(A[j]==item)
        {
            break;
        }

        j=j+1;
    }
    if(A[j]!=item) printf("\n%d Not Found!\n\n",item);
    else printf("\n\nA[%d] = %d\n",j,A[j] );
    return 0;
}
