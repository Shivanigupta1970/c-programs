#include <stdio.h>
int length(char *nm)
{
	int i;
	for(i=0; nm[i]!='\0'; i++);
	return i;
}
main()
{
	int i,n;
	char nm[9];
	printf("entre name ");
	scanf("%s", &nm);
	n = length(nm);
	printf("length=%d", n);
}
