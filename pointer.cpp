#include <stdio.h>
main()
{
	int a=3, *p;
	p=&a;
	printf("\n%d",a);
	printf("\n%d",&a);
	printf("\n%d",p);
	printf("\n%d", *p);
}
