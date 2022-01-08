#include <stdio.h>
main()
{
	int arr[5], i, n;
	printf("how many elsements want to insert into array ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("\t%d", arr[i]);
	}
}
