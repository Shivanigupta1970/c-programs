#include <stdio.h>
void pld(int n)
{
	int r, rev=0,c=n;
	
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
		
	}
	printf("%d", rev);
	
	
	
	if(c==rev)
	{
		printf("palindrom");
		
	}
	else
	{
		printf("not palindrom");
	}
	
}
main()
{
	int n, r, rev=0,c;
	printf("entre number: ");
	scanf("%d", &n);
	c=n;
	pld(n);
	
	

	

	
}
