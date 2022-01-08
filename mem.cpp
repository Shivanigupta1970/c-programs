#include <stdio.h>


struct stud
{
	int roll,tot,m1,m2,m3;
	float per;
	char name[30];
};


union stud1
{
	int roll,tot,m1,m2,m3;
	float per;
	char name[30];
};

main()
{
  	printf("Size of structure : %d",sizeof(stud));
	printf("\nSize of union : %d",sizeof(stud1));
  
  
}
