#include <stdio.h>
main()
{
	int a, b, c, d, max;
	printf("entre a ");
	scanf("%d",&a);
	printf("entre b ");
	scanf("%d", &b);
	printf("entre c");
	scanf("%d", &c);
	printf("entre d");
	scanf("%d", &d);
	
	max: a>b ? a>c ? a>d ? a:d : c>b ?c:b : b>c ? b>a ? b>d ? b:d : c>a? c:a ? c>d : c:d ;
	printf("max=%d", max);
}
