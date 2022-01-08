#include <stdio.h>
main()
{
	int a, b;
	printf("entre a ");
	scanf("%d",&a);
	printf("entre b ");
	scanf("%d", &b);
	
	for(;a!=b;)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
		
	}
	printf("gcd=%d",a);
}
