/*playing with the functions*/
#include<stdio.h>
#include<conio.h>

/* adding some nos using functions*/

int addition (int);
int main()
{
	int add;
	int a;
	int b;
	printf("enter the nos you want to add:");
	scanf("%d",&a,&b);
	add = addition (a,b);
	
	
}

int addition (int a, b)
{
	int add;
	add = a+b;
	return(add);
}


