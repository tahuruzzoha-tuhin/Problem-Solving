#include<stdio.h>

int a[8]; 
int maxsize=8;
int top=-1;

int isempty()
{

    if (top == -1)
        return 1; 
    else
        return 0;


}

int isfull()
{
    if(top == maxsize)
        return 1;
    else
        return 0;
}
int pick()
{
    return a[top];
}


int push(int data)
{
    if(!isfull())
    {
        top=top+1;
        a[top]=data;
    }
    else
        {
            printf("Could not insert data,Stack is full.\n\n");
        }
}
int pop(int data)
{
    if(!isempty())
    {
        top=top-1;
        a[top]=data;
        maxsize-=1;
    }
     else
        {
            printf("Could not delete data,Stack is empty.\n\n");
        }

}
int main()
{

       int i;
       push(10);
       push(20);
       push(30);
       push(40);
       push(50);
       push(60);
       push(7676767);
       push(80);
       push(90);
       push(100);
      /* push();
       push();
       push();*/

    for(i=0; i<maxsize;i++)
    printf("%d ",a[i]);
	printf("\n");
    

    pop(top);
    printf("\n");
    for(i=0; i<maxsize;i++)
    printf("%d ",a[i]);

    printf("\n");

printf("%d\n",top );
    return 0;
}
