#include <stdio.h>
int rev(int *brr, int n)
{
	int i;
	
	for(i=(n-1); i>=0; i--)
	{
		printf("\t%d", brr[i]);
	}
}
main()
{
	int arr[5], i, n;
	
	printf("how many elements want to insert ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		
	}
	rev(arr,n);
}
