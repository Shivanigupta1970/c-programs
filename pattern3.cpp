/*

***
**
*

*/

#include <stdio.h>
main()
{
	int i,j, n=3;
	
	for(i=n; i>0; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
