/* to print one to n tables*/

#include<stdio.h>
void printtable(int n)
{
	int i;
	printf("\nTable of number %d are as:");
	for (i=1;i<=10;i++)
	{
		printf("\t %d",i*n);
		
	}
}


int main()
{
	int no;
	printf("enter the value of the number:");
	scanf(" %d",no);
	printtable(no);
	
}
