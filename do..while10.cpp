#include <stdio.h>
main()
{
	int n, cnt=0;
	printf("entre n ");
	scanf("%d",&n);
	
	do
	{
		n=n/10;
		cnt++;
	}while(n>0);
	printf("cnt=%d",cnt);
}
