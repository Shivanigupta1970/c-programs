#include <stdio.h>
main()
{
	int a, b, c, d;
	printf("entre value of a ");
	scanf("%d",&a);
	printf("entre value of b ");
	scanf("%d",&b);
	printf("entre value of c ");
	scanf("%d",&c);
	printf("entre value of d ");
	scanf("%d",&d);
	
	if (a>b)
	{
		if (a>c)
		{
			if (a>d)
			{
				printf("a max");
			}
			else
			{
				printf("d max");
			}
			
		}
		else
		{
			if (c>b)
			{
				printf("c max");
			}
			else
			{
				printf("b max");
			}
		}
	}
	else if(b>c)
	{
		if (b>a)
		{
			if(b>d)
			{
				printf("b max");
			}
			else
			{
				printf("d max");
			}
		}
		else
		{
			if(c>a)
			{
				printf("c max");
			}
			else
			{
				printf("a max");
			}
		}
		
		

			
	} 
	else 
	{
    	if (c>d)
		{
			printf("c max");
		}
		else
		{
			printf("d max");
		}
    }
	
}
