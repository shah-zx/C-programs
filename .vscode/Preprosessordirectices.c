#include<stdio.h>
#include"Callbyvaluefunction.c"  // Here we included the callbyfunction.c file and all the contents including the files  
//, the variables and all the functionalities of the file has now come into this file now //
// Now we have defined two pre processor variables namely x and y.
// Our previous program gives us the sum of two numbers //

#define x 30; // pre processor variable
#define y 45; // pre processor variable 

// Now we will define a macros  :- a type of function which is faster than a function //

#define SQUARE(r) r*r

int main()

{

int a = x;  // Here the value of a has become 35 
int b = y;  // Here value of b has become 40 //
int r = 6;
sum(a,b);
printf("The address of x is :- %d\n" , &a);
printf("The address of b is %d\n" , &b);
printf("The area of the square is :- %d" , SQUARE(r));  // Using the macros //

}









