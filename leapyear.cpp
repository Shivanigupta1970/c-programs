#include <stdio.h>
main()
{
	int n; 
	printf("entre any year ");
	scanf("%d",&n);
	
    if (n%400==0 )	
    {
    	printf("leap year");
	}
	else if  (n%100==0)
	{
		printf(" not leap year");
	}
	else if (n%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not leap year");
	}
	 
}
