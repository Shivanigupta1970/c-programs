 #include <stdio.h>
main()
{
	int i, j, n=4;
	
	for ( i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==0 || i==3 || j==0 || j==3)
			{
			
			printf(" *");
		    }
		    else
		    {
		    	printf("  ");
			}
		}
		printf("\n");
	}
}
