#include <stdio.h>
int arm(int n)
{
	int r, rev, sum=0,c;
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
main()
{
	int n, r,rev, sum=0, c;
	printf("entre number ");
	scanf("%d", &n);
	arm(n);
}
