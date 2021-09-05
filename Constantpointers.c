#include<stdio.h>
#include<conio.h>

int main()


{


// char const *ptr  = "Shahnawaz";
//  // *ptr = "hamza"; // invalid operation //
// printf("The string is :- %s" , ptr);
// printf("Addreess :- %u" , &ptr);

// We cannot change the address of constant pointers.


// A program for seeing the effect of increment abd decrement operators on pointers //

int x , *x1;
x1 = &x;
printf("The address of x is %u\n" , x1);
printf("The address of x is %u\n" , ++x1);
printf("The address of x is %u\n" , x1++);
printf("The address of x is %u\n" , --x1);
printf("The address of x is %u\n" , x1--);
printf("The address of x is %u" , &x);


}




