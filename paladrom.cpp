#include <stdio.h>
main()
{
	int n, r, x, rev=0;
	printf("entre n ");
	scanf("%d",&n);
	
	
	n=x;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	printf("rev=%d",rev);
	
	if(rev==n)
	{
		printf("it is palindrom");
	}
	else
	{
		printf("it is not palindrom");
	}
}
