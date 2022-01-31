#include<stdio.h>
#include<conio.h>
 float carea(float);

int main()
{
	float radius;
	float area;
	printf("enter the radius of circle");
	scanf("%f",&radius);
	area = carea(radius);
	printf("\narea of circle : %f",area);
	
}

float carea(float r)
{
	float a;
	a = 3.14*r*r;
	return(a);
}
