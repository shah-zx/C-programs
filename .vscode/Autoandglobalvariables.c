#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// int n = 10; // Global variable //

// int num1();

// int main()
//  {

// int a = 20;
// printf("The value of a is :- %d\n" , a);  // Printing the actual variable //
// printf("The value of variable a after increment is :- %d\n" , n);  // Chnanging the value of global variable //
// num1();
// }

// int num1()
// {
//     int a = 30;  // Local or the auto variable //
//     printf("The value of local variable a is :- %d\n" ,a);

// Write a program for declaring the variable using the extern keyword //

// extern int n;
// printf("The value of external or global variable n is :- %d", n);

// int x;  // Will return a garbage value //
// static int  y;
// printf("The value of x is :- %d\n" ,x);
// printf("The value of y is :- %d" , y);

// int static x;  // Initial value of a static variable is always 0 //
// printf("%d\n" ,x);
// printf("The value of x after adding 3 will be :- %d" , x+3);

// A program for understanding the static external variable :- //

int static x;

void loop();

int main()

{
    //     for (;;)  // Infinite loop of for //
    //         loop();
    // }

    // void loop()

    // {
    //     x++;
    //     printf("x is %d\n", x);
    //     if (x == 5)
    //         exit(1);
    // }

    // The register variables //

    register int r = 1;

    // for (; r < 5; r++)
    // {
    //     printf("%d\n", r);
    // }


    while (r<8)
    {
        printf("%d\n" , r);
        r++;
    }
    
}

