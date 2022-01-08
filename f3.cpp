#include <stdio.h>
#include <string.h>
main()
{
	char str[100];
	FILE *fp;
	
	fp = fopen("struct2.cpp","a");
	
	if(fp==NULL)
	{
		printf("File not Found !!");
	}
	else
	{
		while(strlen(gets(str))>0)
		{
			fputs(str,fp);
			fputs("\n",fp);
		}
	}
	
}
