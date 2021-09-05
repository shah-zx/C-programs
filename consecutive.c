// A program to add 10 consecutive numbers starting from 1. 


#include<stdio.h>
#include<conio.h>

int main()

{
	// initiaization
	int n=1,sum=0;
	// body
	while(n<11)
	{
		printf("The digits are :- %d\n",n);
		 sum = sum+n;   // Here sum is initially 0 , but in the loop the values of n in increamented , so the sum increases. //
        //updation
		n++;
	}
	   
		printf("the sum of digits is :- %d",sum);
getche();
}         
