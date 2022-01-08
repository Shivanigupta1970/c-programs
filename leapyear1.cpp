 #include <stdio.h>
 main()
 {
 	int n;
 	printf("entre the value of n ");
 	scanf("%d", &n);
 	
 	if (n%400==0 && n%4==0)
 	{
 		printf("leap year");
	}
	else
	{
		printf("not leap year");
	}
 }
