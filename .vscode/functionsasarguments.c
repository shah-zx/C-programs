
// Here we will be learning about how to pass functions as arguments //

#include <stdio.h>
#include <conio.h>

// int doub(int a);   // function 1 //

// int square(int b);  // function 2 //

 void main()
 {
 int c = 4  , d;
 d = doub(square(c));  // in arguments we have passed function as argument //
 printf("The value after squaring and multiplying the  integer by 2 is :- %d " , d);

 }

 int doub(int a)
{
    int m;
    m = a * 2;
    return(m);
}

int square(int b)
{
    int s;
    s = b * b;
    return(s);
}

One more prgram //

A program using the above property to take a number , print the number and square the number //

int num(int);  // Function 1

int sqr(int);  // Function 2

int main()

{

int b = 25;
num(sqr(b));  // Passed function as argument //

}

int num(int a)
{
   return(a) ;
}

int sqr(int v)
{
    printf("The square of the number is :- %d" , v*v);
}

Cloning the functionality of the abs() function :-

int uabs(int); // Defination , prtotyping //

int main()

{

int s ,  c =  -1;
s = uabs(c);
printf("The absolute value of given number is :- %d" , s);

}

int uabs(int a)

{

if(a<0)
return(-1*a);
else
return(a);

}

// Function for calculating the cube and square of a number //

int cube(int c);

int sqr(int b);

int input();

void main()

{

int  b ;
printf("The cube is :- %d" , cube(sqr(input())));

}



int input()
{
    int k;
    printf("Nmuber is :-");
    scanf("%d" , &k);
    return k;
}
int sqr(int b)
{
    printf("Square :- %d\n" , b*b);
    return b;
}
int cube(int c)
{
    return c* c * c;
}


