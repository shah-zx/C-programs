/* finding area of square using function */


#include<stdio.h>
#include<conio.h>

int squarearea (float); /* this is the function declaration that we want the return value which is area in integer type and 
                        the parameter to be given is in the float data type*/
int main()
{
	float l;
	 int a;
	printf("enter the value of l:");
	scanf("%f",&l);
	a = squarearea (l); /* ths is the function call*/
	printf("the area of the square is : %d", a);
    
}

int squarearea (float l) /*this is the function defintion*/
{
	int  a;
	a = l*l;
	return (a);
}



