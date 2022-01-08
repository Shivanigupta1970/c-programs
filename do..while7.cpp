#include <stdio.h>
main()
{
	int i=1, n, sum=0;
	printf("entre n ");
	scanf("%d",&n);
	
	do
	{
		if(n%i==0)
		{
			sum=sum+i;
			
		}
		i++;
	}while(i<n);
	if (sum==n)
	{
		printf("perfect no. is %d",n);
	}
	else
	{
		printf("not perfect no.");
	}
}
