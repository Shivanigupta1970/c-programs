#include <stdio.h>
main()
{
	int n, product=1 ;
	printf("entre n ");
	scanf("%d", &n);
	 while (n>=1)
	 {
	 	product=product*n;
	 	n--;
	 }
	 printf("product=%d",product);
}
