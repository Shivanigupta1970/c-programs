#include <stdio.h>
main()
{
	int arr[5], i, n, sum=0;
	printf("how many elements in array you want to insert ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++)
	{
		if(arr[i]%2==1)
		{
			sum=sum+arr[i];
		}
		
		
	}
	printf("sum= %d", sum);
}
