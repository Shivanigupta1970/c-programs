#include <stdio.h>
struct complex
{
	int real,img;
	
};
main()
{
	complex c1,c2,c3;
	
	printf("fEnter first Complex  :");
	
	printf("\nEnter real  :");
	scanf("%d", &c1.real);
	
	printf("fEnter img  :");
	scanf("%d", &c1.img);
	
	printf("\nEnter second Complex  :");
	
	printf("\nEnter real  :");
	scanf("%d", &c2.real);
	
	printf("fEnter img  :");
	scanf("%d", &c2.img);
	
	c3.real = c1.real + c2.real;
	c3.img = c1.img + c2.img;
		
	printf("\nc1 : %d+%dj", c1.real,c1.img);
	printf("\nc2 : %d+%dj", c2.real,c2.img);
	printf("\nc3 : %d+%dj", c3.real,c3.img);
	
}
