#include <stdio.h>
main()
{
int i, j,k, n=5;

for(i=1; i<n; i++)
	{
		for(j=1; j<=(n-i); j++)
		{
				printf(" ");
		}
		
		for(k=1; k<=i; k++)
		{
				printf(" *");
		}
		printf("\n");
	}

{
	int i, j, n=5, m=3;
	
	for ( i=1; i<=n; i++)
	{
		printf("    ");
		for(j=1; j<=m; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}
}
