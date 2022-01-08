#include <stdio.h>
main()
{
	int i, j, n=3, m=4;
	
	for(i=1; i<n; i++)
	{
	printf("    ");	
		for(j=1; j<=i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
	for(i=n; i>0; i--)
	{
	printf("    ");	
		for(j=1; j<=i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
	for(j=1; j<9; j++)
		{
			printf("     *");
			printf("\n");
		}
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	

}
