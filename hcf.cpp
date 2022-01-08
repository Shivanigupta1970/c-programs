#include <stdio.h>
main()
{
	int a, b, hcf, gcd;
	printf("entre a ");
	scanf("%d", &a);
	printf("entre b ");
	scanf("%d", &b);
	
	while (a!=b)
	{ 
		gcd = a>b ? a=a-b : b=b-a;
	}

	if (hcf=a*b/gcd)
	{
	
	printf("hcf=%d",hcf);
    
	}
	
}
