#include<stdio.h>
#include<conio.h>



int sqr(int);

int input(int);

int main()

{
int a;
a = sqr(1-input(a)+1);
printf("The square of the number is:- %d" , a);

}

int input(int c)
{
    printf("Enter the number :- ");
    scanf("%d" , &c);
    return c;
}


int sqr(int b)
{
return b*b;
}

// Mod operator //

// Increment and decrement operataor //

// multiply and divide operator //


