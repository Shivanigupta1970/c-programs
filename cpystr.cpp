#include <stdio.h>
main()
{
	int i, n=0;
	char nm[9],str[9];
	
	printf("entre name ");
	scanf("%s", &nm);
	
	for (i=0; nm[i]!='\0'; i++,n++);
	
	for(i=0;i<n;i++)
	{
		str[i]=nm[i];
	}
	str[n]='\0';
	
	puts(str);
}
