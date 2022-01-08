#include <stdio.h>
main()
{
	int n, product=1;
	printf("entre n ");
	scanf("%d",&n);
	
	do
	{
		product=product*n;
		n--;
		
	}while(n>0);
	printf("product=%d",product);
}
