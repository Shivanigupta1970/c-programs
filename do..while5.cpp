#include <stdio.h>
main()
{
	int i=1, n;
	printf("entre n ");
	scanf("%d",&n);
	
	do
	{
		if(n%i==0)
		{
			printf("%d",i);
			
		}
		
		i++;
		
	}
	while(i<=n);
}
