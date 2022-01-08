#include <stdio.h>
main()
{
	char ch;
	printf("entre any character in lower case('a' to 'z') ");
	scanf("%c",&ch);
	
	switch (ch)
	{
		case 'a': 
		case 'e':
		case 'i':
		case 'o':
		case 'u': printf("vowel");
		break;
		
		default : printf("consonant");
	
	}
}
