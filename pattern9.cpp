#include <stdio.h>
main()
{
int i, j,k, n=5;

for(i=1; i<=n; i++)
	{
		for(j=1; j<=(n-i); j++)
		{
				printf(" ");
		}
		
		for(k=1; k<=i; k++)
		{
			if(i==n || k==1 || i==k)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
