#include <stdio.h>
man()
{
	int a, b, c, d;
	printf("entre a ");
	scanf("%d", &a);
	printf("entre b ");
	scanf("%d", &b);
	printf("entre c ");
	scanf("%d", &c);
	printf("entre d ");
	scanf("%d", &d);
	
	max = a>b ? a>c ? a>d : a:d : c>d ? c:d : b>c ? b>d ? b:d : c>d ? c:d ;
	
	printf (" max = %d", max);
	
}
