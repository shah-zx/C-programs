
/*area of triangle*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int c, d;
	float area;
	printf("enter the value of c");
	scanf("%d", &c);
	printf("enter the value of d");
	scanf("%d" ,&d);
	area = 0.5* c *d;
	printf("area of triangle is : %.2f sq units", area);
	
}


