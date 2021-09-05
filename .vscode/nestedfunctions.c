
// Here we will study the nested function //

// Nested function means that we can declare a function into another function //

#include<stdio.h>
#include<conio.h>

void sub(void); // defining //

void nest(void);

// int main()

// {
// printf("We are in the main function.\n");
// sub();
// nest();


// }

//  void sub(void)
//  {
//      printf("We are in sub function");
//      nest();  // Here we decalred another function in the function which is known as the nested function //
//  }

//  void nest(void)
//  {
//      printf("\nWe are in nest function");
//  }


 // Here we will write a program for nesting two functions and performig some arithmetic operations on them //

 
 
 int sqr();

 int cube();
 
 
 int main()

 {
int z = 6;
printf("We are in main function.\n");
printf("The value is %d in main function.\n" , z);
sqr();
cube();
printf("Back to the main function :- %d" , z*z);

 }

 int sqr()
{
    int b = 4;
    printf("We are in sqr function and Square of the number is :- %d\n" , b*b);
    cube(b);
    return b;
}

int cube()
{
    int c = 5;
    printf("We are in cube function and cube of the number is :- %d\n"  , c*c*c);
    return c;
}