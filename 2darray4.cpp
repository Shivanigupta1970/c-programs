/*

how many row and column 2
1
2
3
4
        1
        3       4


*/
#include <stdio.h>
main()
{
	int arr[5][5], i, j, n;
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
		for(j=0; j<=i; j++)
		{
			printf("\t%d", arr[i][j]);
		}
		printf("\n");
	}
	
}
