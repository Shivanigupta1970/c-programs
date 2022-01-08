#include <stdio.h>
main()
{
	int arr[5][5], i, j, n, sum=0;
	
	printf("how many row and column ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
		for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			sum=sum+arr[i][j];
		}
	}
	printf("sum= %d", sum);
}
