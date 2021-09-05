
//  Here we will learn about storage classes. The stotrage classes defines the scope , the lifetime and the initial value of the varible //
// Divided into four catefories :-

// 1) auto storage class
// 2) extern storage class
// 3) static storage class
// 4) register storage class

// Program for understanding the auto storage class //

#include <stdio.h>
#include <conio.h>

// void sum1(void);

// void sum2(void);

// int main()

// {

//     int a = 10;
//     printf("The value of a is %d\n ", a);
//     sum1();
//     sum2();
// }

// void sum1(void)

// {

//     int a = 20;
//     printf("The value of a is :- %d " , a);
// }

// void sum2(void)
// {
//     int a = 30;
//     printf("The value of a is :- %d" ,a);
// }

// The auto storage class defines the auto variables in which auto variables are local variables //
// They cant be accessed in any other function accept then= function they are defined in //
// They are also known as the local variables //

// A program for demonstrating the change in the variables for different blocks //

// int main()

// {
//     int x = 29;
//     printf("The value of var x is :- %d\n", x);
//     {
//         int x = 23;
//         printf("The evalue of var is :- %d\n", x);
//     }
//     printf("The value of x is :- %d", x);

// }

// Global or external variables //

int s = 9;

void num(void);

int main()

{
    s++;
    printf("The value of s++ is %d\n" , s);  // Here the value of global variable is 10 //
    num();
}

void num(void)

{
    s--;
    printf("The vlaue of s-- is :- %d" , s); // Here the value of global variable is 9 //

}



        
