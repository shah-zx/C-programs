// #include <stdio.h>
// #include <conio.h>



// Declaring the function or prototyping //

// int sum(int, int);

// int main()

// {
//     int x = 1;
//     int y = 2;
//     int c;
//     c = sum(x, y);
//     printf("The sum of two integers is :- %d ", c);
// }

// // Declaring the function //

// int sum(int a, int b)
// {
//     return (a + b);
// }

// A program for local variable //

// void fun();  // Prototyping //

// void main()

// {
//     int a = 5 , b = 6;
//     printf("The values of a and b through main function :- %d , %d\n" , a , b);
//     printf("The values of a and b through fun function : -");
//     fun();

// }

// void fun(void)   // Declaration //
// {

//     int a = 10 , b =20;
//     printf("%d , %d" , a , b);

// global variables //

// void fun(void);
// int a =10 , b=5; // Global variables //
// void main()
// {

// a++;
// b--;
// printf("The values of a and b through main function are : %d ,%d\n" , a , b);
// fun();

// }

// void fun(void)

// {

// a++;
// b--;
// printf("The values of a and b through fun function are : %d ,%d" ,a ,b);

// }

// A program for void function which takes no arguments and no return values :- //

// void main()
// {
//     void message(void);  // defining //
//     message();  // calling the message function //
// }

// // Declaring //

// void message (void)

// {

// printf("How is the day today");

// }

// Write a program for displaying alphabets A B C using functions //

// Here we will see the first tyoe of function which is :- no arguments no return values //

// void main()
// {

// void a();
// void b();
// void c();

// a();
// b();
// c();

// }

// void a(void)
// {
//     printf("A\n");
// }

// void b(void)
// {
//     printf("B\n");
// }

// void c(void)
// {
//     printf("C");
// }

//  Here we will see another type of function with arguments but no return values //

// void main()
// {

//     void dat(int, int, int);
//     int d = 28, m = 04, y = 2002;
//     dat(d, m, y);
// }

// void dat(int a, int b, int c)

// {
//     printf("%d/%d/%d", a, b, c);
// }

// A program for calculating the square of a number using function :- //

// void main()

// {
// int f = 5 ;
// void square();
// square(f);
// }

// void square(int a)

// {
//     printf("The square is :- %d",(a*a));
// }