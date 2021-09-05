#include <stdio.h>
#include <conio.h>

// void sum(int *, int *);

// int main()

// {

//     int a = 4, b = 6;
//     sum(&a, &b);
// }

// void sum(int *a, int *b)
// {
//     printf("The addition of both the values is :- %d", *a + *b);

void swap(int* , int*);  // Definition or prototyping of the function //

int main()
{
    int a = 8 , b = 3;
    printf("The values of a and b are :- %d  , %d\n " , a,b);
    swap(&a,&b);
    printf("The values of a and b after swaping are :- %d  , %d " , a,b);

}

void swap(int *x , int *y)  // Declaration of the function //
{
    int temp;
    temp = *x;
    *x=*y;
    *y = temp;
}


