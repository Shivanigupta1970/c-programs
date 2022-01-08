#include <stdio.h>
main()
{
	int a, b, c, max;
	printf("entre a ");
	scanf("%d",&a);
	printf("entre b ");
	scanf("%d", &b);
	printf("entre c");
	scanf("%d", &c);
	
	max : a>b ? a>c ? a:c : b>c ? b:c;
	printf("max=%d", max);
}
