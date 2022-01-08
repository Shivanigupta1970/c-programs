#include <stdio.h>
main()
{
	int arr[5], i, n, brr[5];
	printf("how many elements want to insert in array ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	
	for(i=0; i<n; i++)
	{
		brr[n-i-1] = arr[i];
	}
	
	
	
	for(i=0 ; i<n; i++)
	{
		printf("\t%d", brr[i]);	
	}
	
}
