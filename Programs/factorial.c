#include<stdio.h>
#include<conio.h>

int main()

{
	// initialize
	int n , i=0 , fact=1;
	// body
	printf("Enter a number to get the factorial of it :-");
	scanf("%d",&n);
	while(i<n)
	{
		printf("%d\n",n);
			fact = fact*n;
          	// updation
			  n--;
	}

     		// statements
			        printf("Factorial is :- %d",fact);	

	getche();
}

