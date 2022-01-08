#include <stdio.h>
main()
{
	int a, b, c;
	printf("entre value of a");
	scanf("%d",&a);
	printf("entre value of b");
	scanf("%d",&b);
	printf("entre value of c");
	scanf("%d",&c);
	
	if (a>b)
	{
		if (a>c)
		{
			printf("a max");
		}
		else 
		{
			printf("c max");
		}
	}
	else
	{
		if (b>c)
		{
			printf("b max");
		}
		else
		{
			printf("c max");
		}
	}
}
