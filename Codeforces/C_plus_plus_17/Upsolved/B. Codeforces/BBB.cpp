#include <stdio.h>

int main(int argc, char const *argv[])
{
	int dd, mm, yy, bd, bm, by;
	char p, q;
	scanf("%d%c%d%c%d", &dd, &p, &mm, &q, &yy);
	scanf("%d%c%d%c%d", &bd, &p, &bm, &q, &by);
	if(dd==bd && mm==bm && (yy-by)>=18) printf("YES\n");
	else if(dd!=bd && mm!=bm && (yy-by)>=18) printf("YES\n");
	else if(mm>bm && yy>by && dd>bd) printf("YES\n");
	else if( (yy-by)>=18) printf("YES\n");
	else if (dd==30 || dd==31)
	{
		mm+=1;
		if (mm<bm || mm==12)
		{
			yy+=1;
			if (yy%4==0)
			{
				yy+=1;
				if ((yy-by)==18)
				{
					printf("YES\n");
				}
			}
		}
		else if (mm>bm || mm<12)
		{
			if ((yy-by)>=18)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");	
			}
			
		}
	}
	else if (yy%4==0 && (dd==30 || dd==31))
	{
		mm+=1;
		if (mm<bm || mm==12)
		{
			yy+=1;
			if ((yy-by)>=18)
			{
				printf("YES\n");
			}
			else
		    {
			    printf("NO\n");
		    }
		}
		else if(mm>bm && mm<12)		
		{
			if((yy-by)>=18)
			{
				printf("YES\n");
			}
			else
		   {
				printf("NO\n");
		   }
		}
	}
	else if (yy%4==0 && (dd<30 || dd<31))
	{
		if (mm<bm || mm==12)
		{
			yy+=1;
			if ((yy-by)>=18)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
	    else if(mm>bm)
	    {
		    if(mm==12)	
		    {
		    	yy+=1;
		    	if ((yy-by)>=18)
		    	{
		    		printf("YES\n");
		    	}
		    	else
		    	{
		    		printf("NO\n");
		    	}
			}
			else 
			{
				if ((yy-by)>=18)
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
				
			}
		}
   }
   else if ((dd<30 || dd<31) && mm==12)
   {
   		yy+=1;
   		if ((yy-by)>=18)
   		{
   			printf("YES\n");
   		}
   		else
   		{
   			printf("NO\n");
   		}
   }
   else if (mm<bm )
   {
   		yy+=1;
   		if ((yy-by)>=18)
   		{
   			printf("YES\n");
   		}
   		else
   		{
   			printf("NO\n");
   		}
   }
   
	else printf("NO\n");
	return 0;
}