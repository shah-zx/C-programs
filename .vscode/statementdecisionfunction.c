#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

// int a(); // Definition //

// int main()

// {

//     if (a() % 2 == 0)   // Passing the function in  if statement //
//         printf("The number is even.");
//     else
//         printf("The number is odd.");
// }

// int a() // Declaration //

// {
//     int a;
//     printf("Enter the value of a :- ");
//     scanf("%d", &a);
//     return a;
// }

// A program to see switch statement using function as argument //

// int z();

// int main()
// {
//     int z();
//     int d = 4;
//     switch (z())
//     {
//     case 's':
//         printf("\nSquare of the number %d is %d\n ", d ,d*d);
//         break;
//     case 'c':
//         printf("\nCube of the number %d is %d\n", d,d*d*d);
//         break;

//     default:
//         break;
//     }
// }

// int z()
// {

//     char a;
//     printf("Enter your case :- ");
//     a = getche();
//     a = tolower(a);
//     return (a);
// }

// A program  using function for , for loop //

// int num(int);

// int main()
// {
//     int m = 1;
//     for (; num(m); m++)
//     {
//         printf("%d", m);
//     }
// }

// int num(int k)
// {

//     if (k == 10)
//     {
//         exit(1);
//         return 0;
//     }
//     else
//         return k;
// }

// A program for using function for while loop //

// int num();

// int main()
// {
//     int m = 1 ;
//     while (num()!=0)
//     {
//         printf("Its a non zero number ");
//     }
//     return 0;
// }

// int num()

// {
//     int x;
//     printf("Enter the value of x :-");
//     scanf("%d" , &x);
//     return(x);
// }

// A program for using function in do while loop :- //

// int m(); // Definition //

// int main(void)
// {
//     int n;
//     do
//     {
//         printf("%d", n);
//     } while (m()!= 0);
// }

// int m(void)
// {
//     int p;
//     printf("Enter no.");
//     scanf("%d", &p);
//     return (p);
// }

// A program for functions using array and pointers //

// int ae();

// int main()
// {
//     int p, arr[5] = {ae(), ae(), ae(), ae(), ae()};
//     printf("The elements of the array are :- ");
//     for (p = 0; p < 5; p++)
//     {
//         printf("%d", arr[p]);
//     }
// }

// int ae()
// {
//     int k;

//     printf("Element :-");

//     scanf("%d", &k);
//     return (k);
// }

// A program for using call by value method for function //

//   void array(int, int);

// int main()
// {

//     int a;
//     int arr[] = {1, 3, 4, 5, 6, 7 ,8};
//     for ( a = 0; a < 7; a++)
//     {
//         array(a, arr[a]);
//     }
// }

//  void array(int m, int n)

// {

//     printf("num[%d] = %d\n", m+1, n);
// }

// A program for passing array as arguments to the function :- //


float avg(float [] );  // defining //

int main()

{

float b[] = {1.2,2.4,3.4,4.6,5.2} , average;
average = avg(b);
printf("The average if the 5 numbers is :- %f" , average);
getch();

}


float avg (float a[5])

{
int sum =0;
for (int i = 0; i < 5; i++)
{
sum  = sum + a[i];
}
return (float)(sum/5);

}



// A program for finding the minimum value using pointer //