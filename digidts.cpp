#include <stdio.h>
main()
{
	int n, cnt=0;
	printf("entre n ");
	scanf("%d",&n);
	
	while (n>0)
	{
		n=n/10;
		cnt++;
	}
	
	printf("%d",cnt);
}
