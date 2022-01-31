#include<stdio.h>
#include<conio.h>

char myname  (char);
int main()
{
	char name;
	char my;
	char  shahnawaz;
	printf("enter the first sentence:");
	scanf("%c",&my);
	my = myname(name);
	printf("your name is: %c",name);
}

char myname (char name)
{
	char my;
	name  :  "shahnawaz";
	return (name);
}


