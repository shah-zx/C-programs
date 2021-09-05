

// Program for using the macros and preprocessor variables  //

#include <stdio.h>
#include <conio.h>
#include<stddef.h>
#include<assert.h>

 # define N 10
 # define Equal =
 # define T 
//  # define NUM 1

// # define cls clrscr()
// # define wait() getche()
// # define display printf

// #define and &&
// #define larger >
// #define equal ==

int main()

{

    // int a = N;
    // // Using the undefine MACRO //
    // // # undef N 10 Doing this will undefine 10 as N. // 
    // int i;
    // for ( i = 1; i <=N; i++)
    // {
    //     display ("%d\n" , i);
    // }

    // Program for defining macros for logical operators //

    // int a, b;
    // printf("Enter the value of a and b ");
    // scanf("%d  %d", &a, &b);
    // if (a larger b)
    //     printf("a is bigger :- %d", a);
    // else
    // printf("b is bigger :- %d", b);

// Program for defining the macros for square and cube of a number //

// # define SQUARE(r) r*r // Defined a macros which will give the square of a given number //
// # define CUBE(c) c*c*c  // Definerd a macros which will give the cube of a given number //

/* int a;
printf("Enter the value of a :- ");
scanf("%d" , &a);
printf("The square of the number is :- %d\n"  , SQUARE(a));
printf("The cube of the number is :- %d\n" , CUBE(a)); */




// A program for using the macro for adding two numbers //

// # define ADD(x,y) printf("The addition of x and y is :- %d\n" , x+y); // For addition //
// # define MUL(a,b) printf("The multiplication of the two numbers is :- %d" , a*b); // For muktiplication 


// int x = 5 , y = 6;
// int a = 4 , b = 5;
// ADD(x,y);
// MUL(a,b);

// Understanding the #ifdef and #else macros //



// # ifdef NUM  // Here NUM is defined or not is checked //
// printf("This is line number one.");
// # else
// printf("This is line number two.");
// # endif
// getche();

// Another program for the same :- 

// int a , b;
// printf("Enter both the numbers :- ");
// scanf("%d%d" , &a  , &b);
// # ifdef Equal 
// a Equal b;
// printf("a = %d , b = %d" , a , b);
// # else
// a !Equal b;
// #endif


// # ifndef T
// printf("It is not  defined.");
// # else
// printf("It is defined.");
// #endif

// # ifdef _ _TINY_ _
// printf("Tiny :- %d" , _ _TINY _ _);
// # else
// # ifdef _ _SMALL_ _
// printf("small :- %d" , _ __SMALL _ _);
// # else
// # ifdef _ _MEDIUM_ _
// printf("medium :- %d" , _ _MEDIUM _ _);
// # else
// # ifdef _ _COMPACT_ _
// printf("compact :- %d" , _ _COMPACT_ _);
// # else
// # ifdef _ _LARGE_ _
// printf("Tiny :- %d" , _ _LARGE_ _);
// // # else _ _HUGE_ _
// //printf("Huge :- %d" , _ _HUGE_ _); //
// #endif
// #endif
// #endif
// #endif
// #endif




// The assertion macro //


int x=4;
assert(x!=4);
printf("%d",x);

}










 