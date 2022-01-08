/*

how many row and column 2
13
42
63
36
max= 63

*/
#include <stdio.h>
main()
{
	int arr[5][5], i, j, n, max;
	
	printf("how many row and column ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	max=arr[0][0];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
		
		    if(max<arr[i][j])
		    {
			max=arr[i][j];
			
		    }
		}
	}
	printf("max= %d", max);
}
