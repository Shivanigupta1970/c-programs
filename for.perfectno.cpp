#include <stdio.h>
main()
{
	int i, n, sum=0;
	printf("entre n ");
	scanf("%d",&n);
	
	for(i=1; i<n; i++)
	{
		if(n%i==0)
		{
		sum=sum+i;	
		}
	}
	printf("sum=%d",sum);
	
	if(sum==n)
	{
		printf("perfect no. is%d",n);
	}
	else
	{
		printf("not perfect no ");
	}
}
