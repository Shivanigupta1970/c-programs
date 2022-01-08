#include <stdio.h>
#include <string.h>
main()
{
	char str[100];
	FILE *fp;
	
	fp = fopen("data.txt","a");
	
	if(fp==NULL)
	{
		printf("File not Found !!");
	}
	else
	{
		struct stud
{
	int roll,tot,m1,m2,m3;
	float per;
};


{
  stud s[5];
  int i,n;
  
  printf("How many students : ");
  scanf("%d",&n);
  
  do
  {
	  printf("Enter roll : ");
	  scanf("%d",&s[i].roll);
	  
	  printf("entre m1 : ");
	  scanf("%d", &s[i].m1 );
	  
	  printf("entre m2 : ");
	  scanf("%d", &s[i].m2 );
	  
	  printf("entre m3 ");
	  scanf("%d", &s[i].m3 );
	  
	  s[i].tot = s[i].m1 + s[i].m2 + s[i].m3;
	  s[i].per = (float) s[i].tot/3;
	  
	  i++;
  }while(i<n);
  
  printf("\nRoll\tM1\tm2\tm3\ttot\tper");
 
  for (i=0;i<n;i++)
 	{ 
 		 printf("\n%d\t%d\t%d\t%d\t%d\t%.2f\t",s[i].roll,s[i].m1,s[i].m2,s[i].m3,s[i].tot,s[i].per);	
	}
}
	}
	 
	
}
