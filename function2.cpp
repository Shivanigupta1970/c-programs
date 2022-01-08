#include <stdio.h>
void add(int x , int y )
{
	int z;
	z=x+y;
	printf("ans: %d", z);
}
main()
{
	int a, b;
	printf("entre a and b ");
	scanf("%d%d", &a, &b);
	add(a,b);
}

