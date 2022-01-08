#include <stdio.h>
int pld(int n)
{
	int n,r,rev=0;
	
    while(n>0)
	{
		
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
		
	}
	printf("%d", rev);
	if(n==rev)
	{
		printf("palindrom");
		
	}
	else
	{
		printf("not palindrom")
	}
}

main()
{
	int n,rev;
	printf("entre number : ");
	scanf("%d", &n);
	pld(n,rev);
	

}
