

// Here we will see the call by value function //

#include<stdio.h>
#include<conio.h>

int x = 10 , y= 32;

int  sum(int  , int );

int main2()

{

sum(x,y);
}

int sum ( int a  ,  int b)
{
    printf("The addition of the two numbers is :- %d" , a+b);
}



