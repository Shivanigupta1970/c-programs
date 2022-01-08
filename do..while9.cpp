#include <stdio.h>
main()
{
	int i=1, n, gap, cnt=0;
	
	printf("entre n ");
	scanf("%d", &n);
	printf("entre gap");
	scanf("%d",&gap);
	
	do
	{
		printf("\t%d",i);
		i=i+gap;
	}while(i<=n);
}
