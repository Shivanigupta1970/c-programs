#include <stdio.h>
main()
{
	int arr[10],i,j,r, n;
	printf("entre number :");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		j=0;
		j=i+1;
		while(j>1)
		{
			if(arr[i]!=arr[j])
			{
				printf("%d is uniqu no. ", arr[j]);
				break;
				j++;
			}
		}
		for(i=0; i<n; i++)
		{
			r=n%10;
			
			arr[j]!=r;
			
			printf("%d", r);
			n=n/10;
		}
		
	}
}
