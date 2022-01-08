#include <stdio.h>
main()
{
	char ch;
	FILE *fp;
	
	fp = fopen("data.txt","r");
	
	if(fp==NULL)
	{
		printf("File not Found !!");
	}
	else
	{
		while(ch!=EOF)
		{
			ch = fgetc(fp);
			printf("%c",ch);
		}
	}
	
}
