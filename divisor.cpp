#include <stdio.h>
main()
{
	int i=1, n;
	printf("entre n ");
	scanf("%d", &n);
	
	
	while (i<=10)
	{
		if (n%i==0)
		{
			printf("%d", i);
		}
		i++;
	}
}
