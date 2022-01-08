#include <stdio.h>
#include <stdlib.h>


struct stud
{
	int roll,tot,m1,m2,m3;
	float per;
};

main()
{
  stud s[5];
  int i,n,a;
  
  
  FILE *fp;
  
  
  printf("How many students : ");
  scanf("%d",&n);
  
  a = (int*) malloc( sizeof(int)*n);
  fp=fopen("data.txt", "w");
  
  for (i=0;i<n;i++)
  {
	  printf("Enter roll : ");
	  scanf("%d",(a+s[i].roll);
	  
	  printf("entre m1 : ");
	  scanf("%d", (a+s[i].m1) );
	  
	  printf("entre m2 : ");
	  scanf("%d", (a+s[i].m2) );
	  
	  printf("entre m3 ");
	  scanf("%d", (a+s[i].m3) );
	  
	  (a+s[i].tot) = (a+s[i].m1) + (a+s[i].m2) + (a+s[i].m3;
	  (a+s[i].per)= (float) (a+s[i].tot/3);
  }
  
  printf("\nRoll\tM1\tm2\tm3\ttot\tper");
 
  for (i=0;i<n;i++)
 	{ 
 		 printf("\n%d\t%d\t%d\t%d\t%d\t%.2f\t",*(a+s[i].roll),*(a+s[i].m1),*(a+s[i].m2),*(a+s[i].m3),*(a+s[i].tot),*(a+s[i].per));	
	}
}
