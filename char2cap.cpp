#include <stdio.h>
main()
{
	
	char ch;
	printf("entre ch ");
	scanf("%c",&ch);
	

	
	
	if(ch>=97 && ch<=122)
	{
		ch= ch-32;
	}
		printf("%c",ch);
	

}
