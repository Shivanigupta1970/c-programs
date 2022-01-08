#include <stdio.h>
main()
{
	int  a, b,hcf;
	int x,y;
	printf("entre a ");
	scanf("%d", &a);
	printf("entre b ");
	scanf("%d", &b);
	
	x=a;
	y=b;
	
	while ( a!=b)
	{
		if (a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	printf("GCD=%d",a);
	
	hcf = (x*y)/a;
	printf("hcf=%d",hcf);
	
}
