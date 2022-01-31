#include<stdio.h>
#include<conio.h>

int main()

{

// int a = 3  , b = 6;
// int *a1 , *b1;
// a1 = &a;
// b1 = &b;
// printf("The addition of a and b is :- %d\n" , *a1+b);
// printf("The subtraction of a and b is :- %d\n" , *b1-a);
// printf("The multiplicatin of a and b is :- %d\n" , *a1**b1);
// printf("The division of a and b is :- %d" , *b1/a);



// A program to compare two pointers and  print that the two pointers have the same address //

// int a =2;
// int *b;
// int *c;
// b = &a;
// c = &a;


// if (b==c)
//     printf("The values and the address of b and c is the same :- %d and %u and %u" , a , b , c);
//     else
//         printf("The values of b and c is not the same.");



// A program to display an array element with their addressess using array name as a pointer //

int arr[7] = {2,3,4,5,6,7,8} , i , k=0 , *x;
printf("The values and the addressess are :- \n");
while (k<7)
{
    printf("element number :- %d\n , value of element :- %d\n , address :-%u" , k , *(x+k) , x+k);
    k++;
}


// A program for accessing different array elements through different ways using pointers :-

int arr2[6] = {1,2,3,4,5,6};
int p=0;
for (int  p = 0; i < 6; p++)
{
    
}




}