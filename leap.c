// To check wether a year is leap year or not //

#include<stdio.h>
#include<conio.h>
int main()

{
	int ly;
	printf("enter the year");
	scanf("%d",&ly);
	if(ly%4==0 && ly%100!=0 || ly%400==0)
	goto leap;
	else
	goto noleap;
	leap:
	printf("The year is a leap year");
	return 0;
	noleap:
	printf("The year is not a leap year");
	getch();
    return 0;
			
}


