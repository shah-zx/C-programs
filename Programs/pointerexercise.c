#include<stdio.h>
#include<conio.h>
int main()

{


int num1 , num2 , *ptr1 , *ptr2 , add;
printf("Enter number one and number two :-");
scanf("%d , %d" , &num1 , &num2); 
ptr1 = &num1;
ptr2 = &num2;
add = *ptr1 + *ptr2;
printf("The addition of the numbers is :-" , add);



}