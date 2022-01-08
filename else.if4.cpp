#include <stdio.h>
main()
{
	int a, b, c;
	printf("entre value of a ");
	scanf("%d",&a);
	printf("entre value of b ");
	scanf("%d",&b);
	printf("entre value of c ");
	scanf("%d",&c);
	
	if (a>b && a>c)
	{
		printf("a amx");
	}
	else if (b>a && b>c)
	{
		printf("b max");
	}
	else if (c>a && c>b)
	{
		printf("c max");
	}
	else
	{
		printf("no one is max");
	}
}
