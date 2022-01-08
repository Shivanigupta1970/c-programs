#include <stdio.h>
int gcd(int x, int y)
{
	
	while(x!=y)
	{
		if(x>y)
		{
			x=x-y;
		}
		else 
		{
			y=y-x;
		}
		
	}
	printf("gcd= %d", x);
	
	
	
}
main()
{
	int a, b;
	printf("entre a and b ");
	scanf("%d%d", &a, &b);
	gcd(a,b);
	
}
