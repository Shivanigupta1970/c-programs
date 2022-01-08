#include <stdio.h>
main()
{
	int arr[10],i,j,len=0, n,rev = 0,found=0;
	printf("entre any number :");
	scanf("%d", &n);
	
	while(n>0)
	{
		rev = rev*10+(n%10);
		n = n/10;
	}
	
	for(i=0; rev>0; i++)
	{
		arr[i] = rev%10;
		rev = rev/10;
		len++;
	}
	
	for(i=0; i<len; i++)
	{
		for(j=0; j<len; j++)
		{
			if(arr[i]==arr[j] && i!=j )
			{
				printf("%d\t",arr[j]);		
				found = 1;
				break;
			} 		
		}
		if (found==1)
		{
			break;
		}
		
	}
	
	
}
