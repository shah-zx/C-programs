#include<stdio.h>
#include<conio.h>

int main()
{
	int no;
	int result;
	printf("enter the value of the number:");
	scanf("%d",&no);
	result = no%2?1:0;
	if(result==1)
	printf("number is odd");
	else
	printf("number is even");
	
}



