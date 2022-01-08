
/*

how many rows columns :  2
1
2
3
4
12
34


*/

#include <stdio.h>
main()
{
	int arr[5][5], i,j, n;
	printf("how many rows columns :  ");
	scanf("%d",&n);
	
	
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
			printf("%d", arr[i][j]);
			}
			printf("\n");
		}
	
}
