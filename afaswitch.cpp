#include <stdio.h>
main()
{
	char ch;
	printf("entre any ch ");
	scanf("%c",&ch);
	
	if((ch>='a' && ch<='z')  || (ch>='A' && ch<='Z'))
	{
		switch (ch)
		{
			case 'a':
			case 'A': 
			case 'e':
			case 'E':
			case 'i': 
			case 'I': 
			case 'o':
			case 'O':
			case 'u':
			case 'U': printf("vowel");
			break;
			
			default : printf("consonant");	
		}
	}
	else
	{
		printf("your entred value is not alphabate");
	
	}
}
