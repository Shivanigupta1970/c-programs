#include <stdio.h>
int add(int x, int y)
{
	int z;
	z=x+y;
	return z;
}
main()
{
	int a, b, c;
	printf("entre a and b ");
	scanf("%D%d", &a, &b);
	c=add(a,b);
	printf("ans: %d", c);
}
