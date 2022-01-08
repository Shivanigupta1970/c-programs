#include <stdio.h>
void isperfect(int n)
{
	int sum=0, i=1;
	while (i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(n==sum)
	{
		printf("%d is perfect number ", n);
	}
	else
	{
		printf("%d is not perfect number ", n);
	}
}
main()
{
	int n;
	printf("entre n ");
	scanf("%d", &n);
	isperfect(n);
}
