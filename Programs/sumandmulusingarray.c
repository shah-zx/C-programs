
// A program to take 5 nos as i/p. compute and display the addition of the even nos and mul of odd nos.

#include<stdio.h>
#include<conio.h>
int main()
{
	int i ,a=0,m=1,arr[5];
	
	for(i=0;i<5;i++)
	{
		printf("Enter a number :-");
		scanf("%d",&arr[i]);
	}
	
	
	for (i=0;i<5;i++)
	{
		
		// For add of even nos. //
	if (arr[i]%2==0){
	
		printf("Even no. :- %d\n",arr[i]);
		a=a+arr[i];
	}
	else
	{
	// For mul of odd nos. //
	    printf("odd no.  :- %d\n",arr[i]);
	    m=m*arr[i];
	}
}
	printf("Addition of the even numbers is :- %d\n",a);
	printf("Multiplication of the odd numbers is :- %d",m);

}
