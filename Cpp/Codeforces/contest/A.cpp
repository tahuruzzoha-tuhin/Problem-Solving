
#include<bits/stdc++.h>

#define mr(x,y) x##y 

using namespace std;

int main(int argc, char const *argv[])
{
	char s[500];
	char s1[500];
	char s2[500];
	int t,len,f=0,k=0,j;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i)
	{
		scanf("%s",&s[i]);

		len=strlen(s);
		for (int j = 0; j < len; ++j)
		{
			if (s[j]==s[j+1])
			{
				//printf("%c ",s[j] );
				//s1[j]=s[j];
				k++;
				if (k%2==0)
				{
					k=k*2;
					for(int j=97; j<123; j++){
                        if(s[j]==2) printf("%c", j);
						}
						
					}
				}


			}

	
		}


	

	return 0;
}