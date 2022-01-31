// A program to convert a decimal number to a binary number //

#include<stdio.h>
#include<conio.h>

int main()

{
	//initialize
	int i=1 , b=1 , n , c=1 , e;
	printf("Enter a number which is to be converted in binary number :-");
	scanf("%d",&n);
	//body
	while(i<=n)
	{
	        // statements
	        printf("%d\n",n);
	        if(n%2==0)
	        printf("%d",b);
	        else if(n%2!=0)
	        printf("%d",c);
	        else
	        break;
			//updation
			n--;
			
	}
	//statements
	printf("The binary number is :- %d",e);

	
}

