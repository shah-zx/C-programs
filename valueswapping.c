#include<stdio.h>
int main()
{
	int a=4,b=6;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The value of a is: %d ",a);
	printf("The value of b is: %d ",b);


}

// Here we have swapped the value of the two variables by storing a third value in the variables. //
// First we add the two values and gave that value to variable a , 6+4 = 10 //
// Then calculated b as b = 10-6 which gave 4 //
// Then calculated a as a = 10-4 which gave 6 //
// Thus the value swapped //
