#include<stdio.h>
#include<conio.h>
int main()


{

// int a  = 238;
// float f = 9.4;
// void *ptr;
// ptr  = &a;
// printf("The value of a is : - %d " , *((int *)ptr));
// return 0 ;

int a;
float f;
char x;

void  *pt = &a;
printf("The value of a is :- %d\n" , *(int *)pt = 120);
pt = &f;
printf("The value of f is :- %f\n" , *(float *)pt = 2.34);
pt = &x;
printf("The value of f is :- %c" , *(char *)pt = 'A');



}

