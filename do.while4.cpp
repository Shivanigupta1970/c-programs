#include <stdio.h>
main()
{
	int i=1, a, b;
	printf("entre a ");
	scanf("%d",&a);
	printf("entre b ");
	scanf("%d", &b);
	
	do
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}	while(a!=b);
	printf("hcf=%d",a);
}
