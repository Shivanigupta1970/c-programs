#include <stdio.h>
#include <stdlib.h>
main()
{
	int *a, i, n, max;
	printf("how many elements want to insert ");
	scanf("%d", &n);
	
	a=(int*) malloc(sizeof(int)*n);
	
		for(i=0; i<n; i++)
		{
			scanf("%d", (a+i));
		}
	    max=*(a+i);
		for(i=0; i<n; i++)
		{ 
		    if(max<*(a+i))
		    {
		    	max=*(a+i);
			}
			
		}
		printf("max= %d", max);
}
