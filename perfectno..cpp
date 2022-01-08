#include <stdio.h>
main()
{
	int i=1, n, sum=0;
	printf("entre n");
	scanf("%d", &n);
	
	while (i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
			
		}
		i++;
		
	}
	if(sum==n)
	{
		printf("perfect no. is%d",n);
	}
	else
	{
		printf("not perfect no.");
	}
}
