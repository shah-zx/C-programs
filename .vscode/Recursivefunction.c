// Here we will learn about recursion //

// Recursion is a process in which a function calls itself //

#include <stdio.h>
#include <conio.h>
#include <process.h>
#include<stdlib.h>

// int factiorial(int number)
// {
//     if (number == 1 || number == 0)
//     {
//         return 1;
//     }
//     else

//         return (number * factiorial(number - 1));  // Here we can see we have used the function in the function :- factorial //
// }                                                  // Here upto the recursive case :- 2 and base case :- 0 and 1 //

// int main()

// {
//     int num;
//     printf("Enter the number you want the factiorial of:-  ");
//     scanf("%d", &num);
//     printf("The factorial of %d is %d\n" , num , factiorial(num));
//     return 0;
// }

// A program for addition of numbers many times //

// int add(int n)
// {
//     if (n == 1 || n == 0)
//     {
//         return 1;
//     }
//     else
//         return (n + add(n - 1));
// }

// int main()

// {

//     int p;
//     printf("Enter the number you want to add :-");
//     scanf("%d", &p);
//     printf("The addition of the number %d is :- %d", p, add(p));
//     return 0;
// }

// Now we will see the indirect recursion //

// A program for odd and even numbers //

// void odd();
// void even();
// int n = 1;
// int main()

// {
//     odd();
// }

// void odd(void)
// {
//     if (n <= 10)
//     {
//         printf("%d\n", n + 1);
//         n++;
//         even();
//     }
//     return;
// }

// void even(void)
// {
//     if (n <= 10)
//     {
//         printf("%d\n", n - 1);
//         n++;
//         odd();
//     }
//     return;
// }

// Another program //

// Displaying the numbers from 0 to 5 //

// void show();

// int s=0;

// int main()

// {

//     if (s == 5)
//         show();
//         exit(0);
// }

// void show()
// {
//     int s;
//     printf("%d", s);
//     s++;
// }

// A program for printing the character '*' in right angled triangle order //

// int main()

// {
//     char ch = '*';
//     int r, c;
//     int rows = 8;
//     for (r = 1; r <= rows; r++)
//     {
//         for (c = 1; c <= r; c++)
//         {
//             printf("%c", ch);
//         }
//         printf("\n");
//     }
// }

// Making the above program using functions //

// void starprint(int);

// int main()
// {
//     int r;
//     printf("Enter the number of rows :- ");
//     scanf("%d", &r);
//     starprint(r);
// }

// void starprint(int r)
// {

//     int i, j;
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
// }

// Dry run program //

void A()

{

    printf("\n in A");
}

void main()
{
    A();
}
