#include <stdio.h>
main()
{
	int n, r,rev, sum=0, c;
	printf("entre number ");
	scanf("%d", &n);
	c=n;
	while(n>0)
	{
		
		r=n%10;
		rev=r*r*r;
	    sum=sum+(rev);
        n=n/10;
	}
	n=c;
	if(n==sum)
	{
		printf("armtrong");
	}
	else
	{
		printf("not amstrong");
	}
	
}
