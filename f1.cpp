#include <stdio.h>
main()
{
	
	FILE *fp;
	
	fp = fopen("data.txt","r");
	
	if(fp==NULL)
	{
		printf("File not Found !!");
	}
	else
	{
		printf("File Found !!");
	}
	
}
