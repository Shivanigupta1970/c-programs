#include <stdio.h>
int fact(int n)
{
	int product=1;
	while(n>=1)
	{
		product=product*n;
		n--;
		
	}
	return product;
	
	
	
	
}
main()
{
	int n, c;
	printf("entre n ");
	scanf("%d", &n);
	c=fact(n);
	printf("factorial= %d", c);
}
